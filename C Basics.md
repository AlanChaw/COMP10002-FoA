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
	Example: __Nested If...else__ 
	```c
	#include <stdio.h>
	int main()
	{
		int m=40,n=20;
		if (m>n) {
			printf("m is greater than n");
		}
		else if(m<n) {
			printf("m is less than n");
		}
		else {
			printf("m is equal to n");
		}
	}
	```
	Output
	```
	m is greater than n
	```

2. Loop Control Statements  
	- for loop
		```c
		#include <stdio.h>
		
		int main(){
			int i;
			
			for(i=0;i<10;i++)
			{
				printf("%d ",i);
			}    
		}
		```
	- while loop
		```c
		#include <stdio.h>
		
		int main(){
			int i=3;
			
			while(i<10)
			{
				printf("%d\n",i);
				i++;
			}    
		}
		```

	- do-while loop
		```c
		#include <stdio.h>
		
		int main(){
			int i=1;
			
			do
			{  
				printf("Value of i is %d\n",i);
				i++;
			}while(i<=4 && i>=2);    
			
		}
		```

3. Case Control Statements
	- switch
	- break
	- continue
	- goto

## 7. Array

- One dimensional array
	```c
	#include <stdio.h>

	int main(){
		int a[5] = {0, 1, 2, 3, 4};
		printf("%d\n", a[3]);
		return 0;
	}
	```
	Output
	```
	3
	```
- Two dimensional array
	```c
	#include <stdio.h>

	int main(){
		int arr[2][2] = {10,20,30,40};
		printf("%d\n", arr[1][0]);	
		return 0;
	}
	```
	Output
	```
	30
	```

## 8. String
- Declaration
	```c
	char string[20] = {'h', 'e', 'l', 'l', 'o', ‘\0’}; //each string in C is ended up with null character (‘\0’)

	char string[20] = "hello";  // the memory space is fixed as 20 bytes

	char string[] = “hello”;  // the memory space is allocated during the execution of the program
	```

- Some useful string functions
	```c
	strcat ( str1, str2 );  // str2 is concatenated at the end of str1.

	strncat ( str1, str2, 3 ); // First 3 characters of str2 is concatenated at the end of str1.

	strcpy ( str1, str2); // It copies contents of str2 into str1.

	strlen (str1); // the length of str1.

	int strcmp ( const char * str1, const char * str2 );  // Returns 0 if str1 is same as str2. Returns <0 if strl < str2. Returns >0 if str1 > str2

	char *strchr(const char *str, int character); // Returns pointer to first occurrence of char in str1.

	strlwr()  // Converts string to lowercase
	```

## 9. Pointer

- Introduction  
	- Pointers in C language is a variable that stores/points the __address of another variable__. A Pointer in C is used to allocate memory dynamically i.e. at run time. The pointer variable might be belonging to any of the data type such as int, float, char, double, short etc.
	- Representation: int *p, char *p;
	- Where, * is used to denote that “p” is __pointer variable__ and not a normal variable.

- Key Points
	- Normal variable stores the __value__ whereas pointer variable stores the __address__ of the variable.
	- The content of the C pointer always be a whole number i.e. address.
	- Always C pointer is initialized to null, i.e. int *p = null.
	- The value of null pointer is 0.
	- __& symbol is used to get the address of the variable__.
	- __\* symbol is used to get the value of the variable that the pointer is pointing to__.
	- If a pointer in C is assigned to NULL, it means it is pointing to nothing.
	- Two pointers can be subtracted to know how many elements are available between these two pointers.
	- But, Pointer addition, multiplication, division are not allowed.
	- The size of any pointer is 2 byte (for 16 bit compiler).

- Example using pointer
	```c
	#include <stdio.h>
	int main()
	{
		int *ptr, q;
		q = 50;
		/* address of q is assigned to ptr */
		ptr = &q;
		/* display q's value using ptr variable */
		printf("%d\n", *ptr);
		/* display q's address using ptr variable */
		printf("%p\n", ptr);
		return 0;
	}
	```
	Output
	```
	50
	0x7ffeefbff5ac
	```

	Another example
	```c
	int c, *pc;
	// Wrong! pc is address whereas, 
	// c is not an address.
	pc = c;  
	// Wrong! *pc is the value pointed by address whereas, 
	// &c is an address.
	*pc = &c; 
	// Correct! pc is an address and, 
	// &c is also an address.
	pc = &c; 
	// Correct! *pc is the value pointed by address and, 
	// c is also a value (not address).
	*pc = c;
	```

- Pointers and Arrays  
	In most contexts, array names "decays" to pointers. In simple words, array names are converted to pointers. That's the reason why you can use pointer with the same name as array to manipulate elements of the array. However, you should remember that pointers and arrays are not same.
	Example
	```c
	#include <stdio.h>
	int main()
	{
		int x[5] = {1, 2, 3, 4, 5};
		int* ptr;
		ptr = &x[2];
		printf("*ptr = %d \n", *ptr);
		printf("*ptr+1 = %d \n", *ptr+1);
		printf("*ptr-1 = %d \n", *ptr-1);
		return 0;
	}
	```
	Output
	```
	*ptr = 3 
	*ptr+1 = 4 
	*ptr-1 = 2 
	```
	The address of num1 and num2 are passed to the swap() function using swap(&num1, &num2);. Pointers n1 and n2 stores them.

	When the value at the addresses n1 and n2 are changed, num1 and num2 are also changed respectively. That is, if *n1 and *n2 are changed inside the swap() function, num1 and num2 are also changed inside the main() function.

	Inside the swap() function, *n1 and *n2 swapped. Hence, value stored in num1 and num2 are also swapped.

	This technique is known as call by reference in C programming. It's because addresses are passed to the function instead of the actual value.

## 10. Function

- Introduction  
	A large C program is divided into basic building blocks called C function. C function contains set of instructions enclosed by “{  }” which performs specific operation in a C program. Actually, Collection of these functions creates a C program.   
	Core: __re-susability__

- Key points
	- functions should be declared and defined before calling in a C program.
	- Two ways to call a function
		- Call by value
		- Call by reference
	- Arguement and return value

- Pointers and Functions  
	You can not only pass variables/values to a function, but you can also pass addresses to a function. After all, address is also some kind of a value.
	Example
	```c
	#include <stdio.h>
	void swap(int *n1, int *n2);
	int main()
	{
		int num1 = 5, num2 = 10;
		printf("before swap: \n");
		printf("num1 = %d\n", num1);
		printf("num2 = %d\n", num2);
		// address of num1 and num2 is passed
		swap( &num1, &num2);
		printf("after swap:\n");
		printf("num1 = %d\n", num1);
		printf("num2 = %d\n", num2);
		return 0;
	}
	// pointer n1 and n2 stores the address of num1 and num2 respectively
	void swap(int* n1, int* n2)
	{
		int temp;
		temp = *n1;
		*n1 = *n2;
		*n2 = temp;
	}
	```	
	Output
	```
	before swap: 
	num1 = 5
	num2 = 10
	after swap:
	num1 = 10
	num2 = 5
	```

## 11. C built-in functions
- ARITHMETIC FUNCTIONS
- INT, CHAR VALIDATION FUNCTIONS
- BUFFER MANIPULATION FUNCTIONS
- TIME RELATED FUNCTIONS

## 12. Dynamic memory allocation
- malloc()  
	The malloc() function reserves a block of memory of the specified number of bytes. And, it returns a pointer of type void which can be casted into pointer of any form.

- calloc()  
	The malloc() function allocates a single block of memory. Whereas, calloc() allocates multiple blocks of memory and initializes them to zero.

- realloc()  
	If the dynamically allocated memory is insufficient or more than required, you can change the size of previously allocated memory using realloc() function

- free()   

## 13. C Structure

```c
	struct student
	{
		int a;
		char b[10];
	}
```

## 14. File Handling