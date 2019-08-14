<!-- page_number: true -->

<!-- $size: A4 -->


# COMP10002 Foundations of Algorithms

## Workshop Week3  

<br>

###### Wenbin Cao
###### August 15, 2019
###### GitHub Repo: https://github.com/AlanChaw/COMP10002-FoA


---

# Recap

### Chapter3 Making Choices
- Relational and Logical Operators
- Selection 
	- if ... else... statement
- Switch Statement

### Chapter4 Loops
- for loop
- while loop

### Chapter5 Functions

---


# Relational and Logical Operators
- Type: __int__
	- Non-zero - __True__
	- Zero - __False__  


Relational Operator | Name | Logical Operator | Name
---- | --- | --- | ---
| == |	Equal to | && | and
| > |	Greater than | \|\| | or
| < |	Less than | ! | not
| != |	Not equal to
| >= |	Greater than or equal to
| <= |	Less than or equal to

---

# Selection

- Example1
  ```C
  if (class_size == 50) {
      printf("Class is now full\n");
  } else {
      printf("More students can be accepted\n");
  }
  ```
- Example2
  ```C
  int x=3, y=4, z=6;
  if (x>2)
      if (y>6)
          z = 7;
      else
          z = 8;
  ```
  
---
# Switch Statement

```C
switch (month) {
    case 2:
        length_of_month = 28 +
        (year%4==0 && (year%100!=0 || year%400==0));
        break;
    case  4:
    case  6:
    case  9:
    case 11:
        length_of_month = 30;
        break;
    default:
        length_of_month = 31;
        break;
}
printf("month=%2d, length_of_month=%2d\n", month,length_of_month);
```

---
# "for" loop
- Grammar
  ```C
  for (initialize; guard; update){
      statement
  }
  ```
- Example
  ```C
  for (int i = 0; i < 10; i++){
      printf("i = %d\n", i);
  }
  ```

---
# "while" loop
- Grammar  

  ```C
  while (guard){
      statement
  }
  ```
- Example  
  ```C
  int i = 0;
  while (i < 10){
      printf("i = %d\n", i);
      i++;
  }
  ```
---

# Discussion


##### Exercise 4.2
 Given a general construction that shows how any ___do___ statement can be converted into an equivalent ___while___ statement

---
# while() vs. do...while()

![](http://python.cs.southern.edu/csharpbook/figures/whilevsdowhileflowchart.png)

---

# while() vs. do...while()
- do...while()
  ```C
  int i = 0;
  do{
      printf("i = %d\n", i);
      i++;

  }while(i < 10);
  ```
- while()  
  ```C
  int j = 0;
  printf("j = %d\n", j);
  j++;
  while (j < 10) {
      printf("j = %d\n", j);
      j++;
  }
  ```

---



# Discussion  
##### Exercise 4.1
a. 
```C
for (int i = 0; i < 20; i = i + 3){
    printf("%2d\n", i);
}
```
b. 
```C
for (i = 1; i < 2000000; i = 2*i){
    printf("%7d\n", i);
}
```
c. 
```C
int sum = 0;
for (i = 1; i < 10; i++){
    sum = sum + i;
    printf("S(%2d) = %2d\n", i, sum);
}
```
---

d. 
```C
int i, j;
for (i = 0; i < 8; i++) {
    for (j = i + 1; j < 8; j += 3) {
        printf("i = %d, j = %d\n", i, j);
    }
}
```
e. 
```C
int i, j;
for (i = 0; i < 8; i++) {
    for (j = i + 1; j < 8; j += 3) {
        if (i + j == 7) {
            break;
        }
        printf("i = %d, j = %d\n", i, j);
    }
}
```
---
f. 
```C
int i, j;
j = 5;
for (i = 0; i < j; i++) ; {
    printf("i = %d, j = %d\n", i, j);
}
```
g. 
```C
int i, j;
j = 5;
for (i = 0; i < j; j++) {
    printf("i = %d, j = %d\n", i, j);
}
```

---
# Functions
<img src="./pics/function.jpg" width = "700" height = "" alt="function"/>


---

# Hands On Exercises

##### Exercise 4.5
- Hint: __^D__ means use __Ctrl+D__ to jump out of input loop

##### Exercise 4.6

##### Exercise 4.7

##### Exercise 5.6
- Hint: You may require a help function to find the sum of all the factors of a number.