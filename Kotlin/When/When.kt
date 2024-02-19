

	// When
	
		//Instead of writing many if..else expressions, you can use the when expression, which is much easier to read.
		// The when expression is similar to the switch statement in Java.

	fun main(){
		val day = 4
		val result = when (day) {
			1 -> "Monday"
			2 -> "Tuesday"
			3 -> "Wednesday"
			4 -> "Thursday"
			5 -> "Friday"
			6 -> "Saturday"
			7 -> "Sunday"
		else -> "Invalid day."
		}
	println(result)
	}