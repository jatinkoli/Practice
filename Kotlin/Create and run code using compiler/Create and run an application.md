------------------Create and run an application﻿

Create a simple application in Kotlin that displays "Hello, World!". In your favorite editor, create a new file called hello.kt with the following lines:
-----------------------------------------------
fun main() {
    println("Hello, World!")
}
----------------------------------------------
Compile the application using the Kotlin compiler:

kotlinc hello.kt -include-runtime -d hello.jar

The -d option indicates the output path for generated class files, which may be either a directory or a .jar file. 

The -include-runtime option makes the resulting .jar file self-contained and runnable by including the Kotlin runtime library in it.

To see all available options, run

kotlinc -help


Run the application.

java -jar hello.jar


----------------Compile a library﻿


If you're developing a library to be used by other Kotlin applications, you can build the .jar file without including the Kotlin runtime in it:

-----------------------------------
kotlinc hello.kt -d hello.jar
----------------------------------

Since binaries compiled this way depend on the Kotlin runtime, you should make sure the latter is present in the classpath whenever your compiled library is used.

You can also use the kotlin script to run binaries produced by the Kotlin compiler:

kotlin -classpath hello.jar HelloKt
HelloKt is the main class name that the Kotlin compiler generates for the file named hello.kt.

Run the REPL﻿

You can run the compiler without parameters to have an interactive shell. In this shell, you can type any valid Kotlin code and see the results.

