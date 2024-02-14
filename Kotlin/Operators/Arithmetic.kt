// Arithmetic Operators

fun main() {  
  var x = 5
  var y = 3
  
  println("Addition : " +x +"+" +y+" = "+(x + y))  

	//Subtraction
  println("Subtraction : " +x +"-" +y+" = "+(x - y))  

	//Multiplication
  println("Multiplication : " +x +"X" +y+" = "+(x * y))  

	//Division
  println("Division : " +x +"/" +y+" = "+(x / y)) 

	// Modulus
  println("Modulus : " +x +"%" +y+" = "+(x % y))  

	//Increases the value by 1	
  println("Before Increases : " +x)  

  var a= ++x
  println("After Increases the value by 1	:" +a)

	//Decrement the value by 1	
  println("Before Decrement : " +y)  

  var b= --y
  println("After Decrement the value by 1	:" +b)

}