Day-01 Task Operators
_______________________________________________________________________________________________
Que-1
_______________
Question: Demonstration of Arithmetic Operators in C
Objective
Write a C program to demonstrate the working of basic arithmetic operators (+, -, *, /, %) using two integer values.

Requirements
------------------
Declare two integer variables a and b with values:

a = 9

b = 4

Perform the following arithmetic operations:
_____________________________________________
|- Addition
|- Subtraction 
|- Multiplication 
|- Division  → integer division
|- Modulus   → remainder after division

> Store the result of each operation in a third variable c.
> Display the results using printf in the following format:
// adjoi
a+b = result
a-b = result
a*b = result
a/b = result
Remainder when a divided by b = result

Expected Output

a+b = 13
a-b = 5
a*b = 36
a/b = 2
Remainder when a divided by b = 1
_________________________________________________________________
ans-1
#include <stdio.h>

int main() {
    
    int a=9,b=4;
    int c=a+b;
    printf("%d\n",c);
     c=a-b;
     printf("%d\n",c);
     c=a*b;
     printf("%d\n",c);
     c=a/b;
     printf("%d\n",c);
     c=a%b;
     printf("%d\n",c);
    
}

Output:

13
5
36
2
1



Que-2
______________________
Question: Demonstrate the Working of Increment and Decrement Operators in C
Objective
Write a C program to demonstrate the use of pre-increment (++var) 
and pre-decrement (--var) operators with both integer and floating-point variables.

Requirements
--------------------------------
Declare the following variables:

> Integer variables: a = 10, b = 100
> Floating-point variables: c = 10.5, d = 100.5

Apply the pre-increment (++) operator to:
-----------------------------------------
|- Integer variable a
|- Floating-point variable c

Apply the pre-decrement (--) operator to:
> Integer variable a and b
> Floating-point variable c and d

Display the results using printf in the following format:
++a = result
--b = result
++c = result
--d = result
Return 0 to indicate successful execution.

Expected Output
++a = 11
--b = 99
++c = 11.500000
--d = 99.500000

________________________________________________________________________
#include <stdio.h>

int main() {
    
   int a=10,b=100;
   float c=10.5 ,d=100.5;
   printf("%d\n",++a);
   printf("%f\n",++c);
   printf("%d\n",--b);
   printf("%f\n",--d);
    
}

11
11.500000
99
99.500000



Que-3
________________
Question: Demonstrate the Working of Assignment Operators in C
Objective
Write a C program to demonstrate the use of assignment operators 
(=, +=, -=, *=, /=, %=) in C.

Requirements
------------------------------
Declare two integer variables:

> a = 5
> c (uninitialized)

Perform the following operations step-by-step:
-----------------------------------------------
> c = a;  → Assign value of a to c.
> c += a; → Add a to c and assign the result to c.
> c -= a; → Subtract a from c and assign the result to c.
> c *= a; → Multiply c by a and assign the result to c.
> c /= a; → Divide c by a and assign the result to c.
> c %= a; → Assign the remainder of c / a to c.

After each operation, print the value of c in the format:
c = value
Return 0 to indicate successful execution.

Expected Output

c = 5
c = 10
c = 5
c = 25
c = 5
c = 0
_______________________________________________________________________
Ans:3

#include <stdio.h>

int main() {
    
   int a=5;
   int c=a;
   printf("%d\n",c);
   c+=a;
   printf("%d\n",c);
   c-=a;
   printf("%d\n",c);
   c*=a;
   printf("%d\n",c);
   c/=a;
   printf("%d\n",c);
   c%=a;
   printf("%d\n",c);
   
}


Que-4
________________________
Question: Demonstrate the Working of Relational Operators in C
Objective
Write a C program to demonstrate the use of relational operators 
(==, !=, >, <, >=, <=) in C.

Requirements
-------------------------------
Declare three integer variables:
> a = 5
> b = 5
> c = 10

Perform and display the results of the following relational operations:
---------------------------------------------------------------------
|-  a == b and a == c → Equality check
|-  a > b and a > c → Greater than check
|-  a < b and a < c → Less than check
|-  a != b and a != c → Not equal check
|-  a >= b and a >= c → Greater than or equal check
|-  a <= b and a <= c → Less than or equal check

Display the results using the format:
-------------------------------------
x operator y is result
where:
> x and y are the values being compared.
> result will be 1 if the relation is true, otherwise 0.
> Return 0 to indicate successful execution.

Expected Output
___________________
5 == 5 is 1
5 == 10 is 0
5 > 5 is 0
5 > 10 is 0
5 < 5 is 0
5 < 10 is 1
5 != 5 is 0
5 != 10 is 1
5 >= 5 is 1
5 >= 10 is 0
5 <= 5 is 1
5 <= 10 is 1
__________________________________________________________________
#include <stdio.h>

int main() {
    
   int a=5,b=5,c=10;
   
   int y =a==b;
   printf("%d\n",y);
   
    y =a==c;
   printf("%d\n",y);
    y =a>b;
   printf("%d\n",y);
    y =a>c;
   printf("%d\n",y);
    y =a<b;
   printf("%d\n",y);
    y =a<c;
   printf("%d\n",y);
    y =a!=b;
   printf("%d\n",y);
    y =a!=c;
   printf("%d\n",y);
    y =a>=b;
   printf("%d\n",y);
    y =a>=c;
   printf("%d\n",y);
    y =a<=b;
   printf("%d\n",y);
    y =a<=c;
   printf("%d\n",y);
  
   
}

Que-5
________________________
Question: Demonstrate the Working of Logical Operators in C
Objective
Write a C program to demonstrate the use of logical operators (&&, ||, !) in C.

Requirements
-------------------------------
Declare three integer variables:

a = 5
b = 5
c = 10

Also declare an integer variable result to store the outcome of logical operations.

Perform and display the results of the following logical expressions:

> (a == b) && (c > b) → Logical AND (true + true = true)
> (a == b) && (c < b) → Logical AND (true + false = false)
> (a == b) || (c < b) → Logical OR (true + false = true)
> (a != b) || (c < b) → Logical OR (false + false = false)
> !(a != b) → Logical NOT (negation of false = true)
> !(a == b) → Logical NOT (negation of true = false)

Display the results in the format:
expression is result
where:
expression is the logical expression being evaluated.
result is 1 if the expression evaluates to true, otherwise 0.

Return 0 to indicate successful execution.

Expected Output

(a == b) && (c > b) is 1
(a == b) && (c < b) is 0
(a == b) || (c < b) is 1
(a != b) || (c < b) is 0
!(a != b) is 1
!(a == b) is 0
____________________________________________________________________
ans:
#include <stdio.h>

int main() {
    
   int a=5,b=5,c=10;
   
   int y=a==b;
   int x=c>b;
   int z=x&&y;
   printf("%d\n",z);
    y=a==b;
    x=c<b;
    z=x&&y;
   printf("%d\n",z);
   y=a==b,x=c<b;
    z=y||x;
  printf("%d\n",z);
   y=a!=b,x=c<b;
    z=y||x;
  printf("%d\n",z);
   
  z=!(a != b);
      printf("%d\n",z);
  z=!(a == b);
      printf("%d\n",z);

   
}

Que-6
_____________________
Question: Find the Size of Basic Data Types in C
Objective
Write a C program to determine and display the size in bytes of the 
following basic C data types:

> int
> float
> double
> char

Requirements
--------------------------------------
Declare variables of the following types:

> Integer → int a;
> Floating-point → float b;
> Double-precision floating-point → double c;
> Character → char d;

Use the sizeof operator to determine the size of each variable in bytes.

Display the output in the format:

Size of int = X bytes
Size of float = X bytes
Size of double = X bytes
Size of char = X byte

where X is the number of bytes occupied by the data type on your system.

Return 0 to indicate successful execution.

Expected Output
(Output may vary depending on system architecture)

Size of int = 4 bytes
Size of float = 4 bytes
Size of double = 8 bytes
Size of char = 1 byte
____________________________________________________________________________
ans: 
#include <stdio.h>

int main() {
    int a;
    float b;
    double c;
    char d;
    
    printf("size of int :%d bytes\n",sizeof(a));
    printf("size of float :%d bytes\n",sizeof(b));
    printf("size of double :%d bytes\n",sizeof(c));
    printf("size of char :%d bytes\n",sizeof(d));

   
}


Que- 7
_______________________
 Print the structure by using printf statement "\n" and "\t" 
 don't use any loop ?

 012345678910110
 a             b
 c             d
 e             f
 g             h
 I             j
 012131415161710

 -----------------------------------------
ans:
#include <stdio.h>

int main() {

    
    printf("012345678910110\n");
    
    printf("a \t b\n");
    printf("c \t d\n");
    printf("e \t f\n");
    printf("g \t h\n");
    printf("i \t j\n");
  
    printf("012131415161710");
   
}

