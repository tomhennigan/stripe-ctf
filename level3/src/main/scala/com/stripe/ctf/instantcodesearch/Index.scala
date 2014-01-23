package com.stripe.ctf.instantcodesearch

import java.io._
import collection.mutable.HashMap


class Index(repoPath: String) extends Serializable {
  var files = List[String]()
  var fileToWordToLines = new HashMap[String, HashMap[String, scala.collection.mutable.Set[Int]]]()

  def path() = repoPath

  def addFile(file: String, text: String) {
    files = file :: files

    // 1. Text into lines.
    val lines = text.replaceAll("[^a-zA-Z0-9 \n]","").split("\n");

    // 2. Lines into words.
    val wordsPerLine = lines
        .zipWithIndex  // index of lineNum => line
        .map { case (l,n) => l.split(" ") };  // lineNum => words

    // 3. Map of word => {l1, ..., lN}
    fileToWordToLines(file) = new HashMap[String, scala.collection.mutable.Set[Int]]();
    val wordToLines = fileToWordToLines(file);

    // Forgive me scala for I know not what I do...
    lines.zipWithIndex.foreach {
      case(l,n) => l.split(" ").foreach {
        case(w) => wordToLines(w.trim) = scala.collection.mutable.Set.empty
      }
    }
    lines.zipWithIndex.foreach {
      case(l,n) => l.split(" ").foreach {
        case(w) => wordToLines(w.trim) add (n + 1)
      }
    }
  }

  def write(out: File) {
    val stream = new FileOutputStream(out)
    write(stream)
    stream.close
  }

  def write(out: OutputStream) {
    val w = new ObjectOutputStream(out)
    w.writeObject(this)
    w.close
  }
}

