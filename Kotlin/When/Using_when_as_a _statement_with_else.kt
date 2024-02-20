

	// Using when as a statement with else
	
	fun main (args : Array<String>) {
	print("Enter the name of student: ")
	var name= readLine()!!.toString()
	when(name) {
		"Jatin" -> println("CS Student")
		"Omkar" -> println("BMS Student")
		"Meet" -> println("IT Student")
		else -> println("I don't have any information: ")
	}
}


		// Out_Put
/*
	Enter the name of Student: Jatin
	CS Student
	Enter the name of heavenly body: Tamanna
	I don't have any information:
*/