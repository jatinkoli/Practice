

// For Loop 

package com.example.firstkotlinprogram
import  java.util.Scanner

fun main(args: Array<String>)
{
    var input = Scanner(System.`in`)
    println("Enter the number you want table for: ")
    var j:Int = input.nextInt()

    println("Enter the number you want table til: ")
    var a:Int = input.nextInt()

    for (i in 1..a)
    {
        println(""+j+"X"+i+" = "+(j*i))
    }
	//THE OUTPUT1 IS HAVING THIS CODE OUTPUT
	
// 	-------------------Second for example---------------------
	// Dont run it with the up code comment the up code or delete it 
	
	 var sum:Int = 0
    for (i in 1..10)
    {
        println(i)
        sum +=i // Sum = sum+i
        println("Sum of the numbers:= "+sum )
    }
	//THE OUTPUT2 IS HAVING THIS CODE OUTPUT
	
//	------------------------Working with arrays-----------------------------
	// Dont run it with the up code comment the up code or delete it 

	var jatin = arrayListOf<Int>(1,2,3,4,5,6,7,8,9,10)
    for (i in jatin){

        println("The ENTRY OF LIST:" +i)
    }
	//THE OUTPUT3 IS HAVING THIS CODE OUTPUT


}
