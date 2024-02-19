
	// Else If 
	
		//Use else if to specify a new condition if the first condition is false.



		fun main() {
	
			// create an object for scanner class
			var num = -20
				print("Enter any number: ")

			// read the next Integer value			 
			var result = if ( num > 0){
				println(""+num+" is positive number")
			}
			else if( num < 0){
				println(""+num+" is negative number")
			}
			else{
				println(""+num+" is equal to zero")
			}
			println(result)

		}