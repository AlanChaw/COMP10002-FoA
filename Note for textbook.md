# Notes for textbook
This file is my notes on textbook of COMP10002 - "Programming, Problem Solving, and Abstraction with C" by Alistair. 

## Chapter 1: Computer and Programs
1. Program Components (Page 8)
    - Comments
    - Declarations
    - Assignment statements
    - Control statements
    - I/O statements

2. Be careful  
    Files and data could be much more valuable than the computer itself.  
    > Time spent working on a computer is a resource far more precious than the hardware itself. To minimize the impact of hardware failure, you should adopt a regular backup routine. 

## Chapter 2: Numbers In, Numbers Out

1. Identifiers
    - Must in __right format__ (begin with letter or "_", do not contain any other symbols)
    - Use __meaningful identifiers__, make the code more readable and understandable
    - Do not use reversed words in C (like "int", "auto", "const"...)

2. Constants and variables
    - Constants  
        Constants __cannot be changed__ during the execution of the program. It can be defined and assigned by the following two approaches:
        ```c
        # define height 100
        ```
        OR
        ```c
        const int height = 100; /*int constant*/
        ```
        > Use symbolic constants for all fixed values manipulated in your programs, to improve readability, and to facilitate subsequent modifications. 

    - Variables  
        - Variables represent values that change. 
        - Variables must be assigned values before used.
    
    - Some problems for numeric variables  
        - Integer overflow and underflow
        - Floating point numbers are approximations. (Decimals cannot be accurately represented by binary numbers for computers. )
        - Type casting between __int__ and __double__. 
            > Be sure that you use constants of types that match the variables they are being combined with. 

3. Operators and expressions
    - Arithmetic operators  
        When both operators to the binary operators are of type __int__, the result is always of type __int__. If either or both of the operators are of type __float__ or __double__, the result is of type __double__. 

4. Numbers In
    ```c
    scanf("%d%d", &num_A, &num_B);   //& means get the address of the variable rather than the value
    ```
5. Numbers Out  
    Usual format: 
    ```c
    printf("The result is:  %d \n", num_A)
    ```
    For doubles and floats, 
    ```c
    %w.pf
    ```
    The w sets the maximum width of the entire number, including the decimal place. The p sets precision.

6. Assignment statements 

    ```c
    variable = expression
    ```

## Chapter 3: Making Choices

1. Logical expressions  
    - Relational and logical expressions in C  (Page 30) 
    - In C, the result type of all relational and logical expressions are __int__. 0 for false and 1 for true.
    - Precedence hierachy for arithmetic, relational, and logical operators. (Page 31)
    - Side effects caused by assignment operators inside expressions. (like n+=n++)

3. 