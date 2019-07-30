# C Basics
## 1. Intro 

__C11 Standard__. 

__Structure Oriented Language__:  

- large programs are divided into small programs called functions. 
- Prime focus is on functions and procedures that operate on the data

__Middle level Programming Language__

## 2. Data Types  
1. Basic Data Types
	- Integer - int - 4bytes
	- Character - char - 1bytes
	- Floating Point
		- float - 4bytes
		- double - 8bytes

2. Enumeration Data Type  

	Example code:  

	```c
	#include <stdio.h>

	int main(){
		enum MONTH { Jan, Feb, Mar };
		enum MONTH month = Mar;
		printf("%d \n", month);
		return 0;
	}
	```
	Output
	```
	2
	```

3. Derived data type  
	- Array
	- pointer
	- structure
	- union

4. Void data type  
	Void is an empty data type that has no value. This can be used in functions and pointers.

## 3. Basic I/O  
1. __Hello world__  
	Code
	
	```c
	#include <stdio.h>
	
	int main() {
	    printf("Hello, World!\n");
	    return 0;
	}
	```
	Output  

	```
	Hello, World!
	```

2. __printf()__  
	printf() function is used to print the “character, string, float, integer, octal and hexadecimal values” onto the output screen.
	- %d - integer variable  
	- %c - character
	- %f - float
	- %s - string
	- %lf - double
	- %x - hexadecimal

3. __scanf()__  
	scanf() function is used to read character, string, numeric data from keyboard.  
	
	Example code:
	
	```c
	#include <stdio.h>
	
	int main()
	{
	    char ch;
	    char str[100];
	    printf("Enter any character \n");
	    scanf("%c", &ch);
	    printf("Entered character is %c \n", ch);
	    printf("Enter any string ( upto 100 character ) \n");
	    scanf("%s", &str);
	    printf("Entered string is %s \n", str);
	}
	```
	Output:  
	
	```C
	Enter any character 
	d
	Entered character is d 
	Enter any string ( upto 100 character ) 
	abcd
	Entered string is abcd 
	```

## 4. Constant  
Constants are also like normal variables. But, only difference is, their values can not be modified by the program once they are defined.
```c
const int height = 100; /*int constant*/
```
Or
```c
#define height 100
```
## 5. Variable  
C variable is a named location in a memory where a program can manipulate the data. This location is used to hold the value of the variable.  
The value of the C variable may get change in the program.  

Three types of Variable:
- __Local variable__  
	The scope of local variables will be within the function only. These variables are declared within the function and can’t be accessed outside the function.
- __Global variable__  
	The scope of global variables will be throughout the program. These variables can be accessed from anywhere in the program.
- __Environment variable__  
	We can access these variables from anywhere in a C program without declaring and initializing in an application or C program.

## 6. Control Statements

1. Decision Control Statements

2. Loop Control Statements

3. Case Control Statements

## 7. Array

## 8. String

## 9. Pointer

## 10. Function

## 11. C built-in functions

## 12. Dynamic memory allocation

## 13. C Structure

## 14. File Handling