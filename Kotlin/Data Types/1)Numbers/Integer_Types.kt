fun main()
{
	//Byte can store numbers from -128 to 127:

	val myNum: Byte = 100
	println(myNum)

	//Short store numbers from -32768 to 32767:

	val myNum: Short = 5000
	println(myNum)

	//Int store numbers from -2147483648 to 2147483647:

	val myNum: Int = 100000
	println(myNum)

	//Long store numbers from -9223372036854775807 to 9223372036854775807: 

	val myNum: Long = 15000000000L
	println(myNum)
	
	/*Difference Between Int and Long
	 The number is an Int as long is 2147483647 if it go 	 more than it is defined as Long:*/

	val myNum1 = 2147483647  // Int
	val myNum2 = 2147483648  // Long

}