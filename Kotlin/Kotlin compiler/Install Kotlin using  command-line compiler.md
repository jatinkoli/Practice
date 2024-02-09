------------Install the compiler﻿-------------------


----Manual install﻿-----

	To install the Kotlin compiler manually:
		
		1)Download the (kotlin-compiler-1.9.22.zip).

		2)Unzip the standalone compiler into a directory and optionally add the bin directory to the system path. 
	
		3)The bin directory contains the scripts needed to compile and run Kotlin on Windows, macOS, and Linux.


------------SDKMAN!﻿-------------------

An easier way to install Kotlin on UNIX-based systems, such as macOS, Linux, Cygwin, FreeBSD, and Solaris, is SDKMAN!.

It also works in Bash and ZSH shells.

To install the Kotlin compiler via SDKMAN!, run the following command in the terminal:

sdk install kotlin

----------Homebrew---------------

Alternatively, on macOS you can install the compiler via

brew update
brew install kotlin

----------Snap package------------
﻿
If you use Snap on Ubuntu 16.04 or later, you can install the compiler from the command line:

sudo snap install --classic kotlin
﻿