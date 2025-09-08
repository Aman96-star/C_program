// switch statement
a=97  to 122
A=65 to 90 

        2
       1,2,3
       a=66, ch =65 ch1=66 ch3=67

Q4.   Consider the following code:

#include <stdio.h>
int main() {
int num = 20;
switch (printf("%d", num)) {
case 1: printf(" Case 1");
break;
case 2: printf(" Case 2");
break;
default: printf(" Default case");
}
return 0;
}

What will be the output of the program?
--

 a) 2 Case 1


 b) 2 Case 2


 c) 2 Default case


 d) Compile-time error

5...
Q5.   What is the output of C Program with switch statement or block.?
int main()
{
int a;

switch(a)
{
printf("APACHE ");
}

printf("HEROHONDA");
}

 APACHE HEROHONDA

 HEROHONDA

 No Output

 Compiler error
............
Q6.   What will be the output of the following code?
----------------------------------------------
int x = 2;
switch (x) {
default: printf("Default");
case 1: printf("One");
case 2: printf("Two");
case 3: printf("Three");
}

 a) One


 b) TwoThreeDefault


 c) TwoThree


 d) Compile-time error

.................
Q7.   Can a switch statement work with floating-point values in C?

 a) Yes


 b) No


 c) Only with float


 d) Only with double
...............
Q8.   What is the output of C Program with Switch Statement.?
int main()
{

int a=5;

switch(a)
{
case 0: printf("0 ");
case 3: printf("3 ");
case 5: printf("5 ");
default: printf("RABBIT ");
}

a=10;
switch(a)
{
case 0: printf("0 ");
case 3: printf("3 ");
case 5: printf("5 ");
default: printf("RABBIT "); break;
}

return 0;
}

 5 RABBIT

 0 3 5 RABBIT 0 3 5 RABBIT

 0 3 5 RABBIT RABBIT

 5 RABBIT RABBIT

9...........
Q9.   What will be the output of the program?


#include <stdio.h>
int main() {
int num = 20;
switch (printf("%d", num)) {
case 1: printf(" Case 1");
break;
case 2: printf(" Case 2");
break;
default: printf(" Default case");
}
return 0;
}

 a) 2 Case 1


 b) 2 Case 2


 c) 2 Default case


 d) Compile-time error

10..........
Q10.   How many 'default' cases can a 'switch' statement have in C?

 One

 Two

 As many as needed

 Zero

11.................
Q11.   In the SWITCH-CASE statement the default case must be used?

 TRUE

 -

 FALSE

 -

12...........

Q12.   How can you break out of a switch case in C?

 a) Using continue


 b) Using return


 c) Using break


 d) Using exit()

13...............
Q13.   What is the output of C Program with switch statement.?
#include<stdio.h>
int main()
{
char code='K';

switch(code)
{
case 'A': printf("ANT ");break;
case 'K': printf("KING "); break;
default: printf("NOKING");
}

printf("PALACE");
}

 KING PALACE

 KING NOTHING PALACE

 ANT KING PALACE

 Compiler error for using Non Integers as CASE constants.

14...........
Q14.   what will be the output of the program, If the input provided is 10?


#include <stdio.h>
int main() {
int x;
switch (scanf("%d", &x)) {
case 0: printf("Case 0");
break;
case 1: printf("Case 1");
break;
default: printf("Default case");
}
return 0;
}

 a) Case 0


 b) Case 1


 c) Default case


 d) Compile-time error


15................
Q15.   What will be the output of the given C program?
#include<stdio.h>
int main()
{
int a = 2;
int x= 2;
int y = 1;
switch(a)
{
case y:
printf("Welcome");
break;
case x:
printf("Know Program");
break;
default:
printf("Hello");
break;
}
return 0;
}

 Welcome

 Know Program

  Hello

 Compile-time error

 // ladder loop 
 ServiceCenter

[Title: Vehicle Service Center Management System Using nested else-if ladder]
-----------------------------------------------------------------------------
Write a C program for a service center by following the given rules and guidelines.

This service center only accepts 2-wheelers, 3-wheelers, and 4-wheelers. If any other vehicle comes to you, you must display a message: "This service center does not accept vehicles other than 2-wheelers, 3-wheelers, and 4-wheelers."

If the vehicle is a 2-wheeler, 3-wheeler, or 4-wheeler, you should ask the user what the age of the vehicle is.

If the age of the vehicle is above 8 months, only then will you accept the service; otherwise, you must show a message: "Your vehicle service will be done after a while."

If the vehicle's age is greater than 8 months, display options to the user on the console.

Options :-
----------
-> Enter 1 for a tire problem
-> Enter 2 for a fuel problem
-> Enter 3 for an engine issue
-> Enter 4 for general services

If the user enters 1 as input for a tire problem, you should display the message: "How many tires are you facing issues with?" Based on the number of tires, generate the bill.

For example, if the tire cost is Rs. 400, and the user provides 3 tires, the bill should be generated as Rs. 1200 in the format below.

Bill Format :-
---------------
-> Name of the owner

-> Name of the bike

-> Issue

-> Bill
--------
For fuel problems, the cost is Rs. 1500.

For engine issues, the cost is Rs. 5000.

For general servicing, the cost is Rs. 1000.

Please generate the bill in the above format.

Enter owner's name: John Doe
Enter vehicle name: Yamaha FZ
Enter vehicle type (2 for 2-wheeler, 3 for 3-wheeler, 4 for 4-wheeler): 2
Enter vehicle age in months: 12

Select the issue:
-> Enter 1 for tire problem
-> Enter 2 for fuel problem
-> Enter 3 for engine issue
-> Enter 4 for general services
Enter your choice: 1
How many tires are you facing issues with? 2

----- Bill Format -----
-> Name of the owner: John Doe
-> Name of the bike: Yamaha FZ
-> Issue: Tire Problem
-> Bill: Rs. 800.00
Sample Input
Enter owner's name: John Doe
Enter vehicle name: Yamaha FZ
Enter vehicle type (2 for 2-wheeler, 3 for 3-wheeler, 4 for 4-wheeler): 2
Enter vehicle age in months: 12

Select the issue:
-> Enter 1 for tire problem
-> Enter 2 for fuel problem
-> Enter 3 for engine issue
-> Enter 4 for general services
Enter your choice: 1
How many tires are you facing issues with? 2
Sample Output
----- Bill Format -----
-> Name of the owner: John Doe
-> Name of the bike: Yamaha FZ
-> Issue: Tire Problem
-> Bill: Rs. 800.00


-----------------------------------------
#include<stdio.h>

int main() {
char owner[60],vehicle[60];
int vehicletype;
// printf("Name of the owner: ",owner);
printf("Enter owner's name: ");

scanf(" %[^\n]",owner);

printf("Enter vehicle name: ");
scanf(" %[^\n]",vehicle);

printf("Enter vehicle type (2 for 2-wheeler, 3 for 3-wheeler, 4 for 4-wheeler): ");
scanf("%d",&vehicletype);

if(vehicletype==2 ||vehicletype==3 ||vehicletype==4){
  int vage;
  printf("Enter vehicle age in months: ");
  scanf("%d",&vage);
  if(vage>8){
    int problemtype;
   printf("Select the issue:\n");
            printf("-> Enter 1 for tire problem\n");
            printf("-> Enter 2 for fuel problem\n");
            printf("-> Enter 3 for engine issue\n");
            printf("-> Enter 4 for general services\n");
            printf("Enter your choice: ");
            scanf("%d", &problemtype);
   if(problemtype == 1) {
    printf("How many tires are you facing issues with? ");
    int numtires;
    scanf("%d", &numtires);

    if(numtires > 0) {
        int bill = 400 * numtires;
        printf("----- Bill Format -----\n");
        printf("-> Name of the owner: %s\n", owner);
        printf("-> Name of the bike: %s\n", vehicle);
        printf("-> Issue: Tire Problem\n");
        printf("-> Bill: Rs. %d.00\n", bill);
    } else {
        printf("Invalid number of tires.\n");
    }

   }
   
    else if(problemtype == 2) {
    printf("----- Bill Format -----\n");
    printf("-> Name of the owner: %s\n", owner);
    printf("-> Name of the bike: %s\n", vehicle);
    printf("-> Issue: Fuel Problem\n");
    printf("-> Bill: Rs. 1500.00\n");
}
else if(problemtype == 3) {
    printf("----- Bill Format -----\n");
    printf("-> Name of the owner: %s\n", owner);
    printf("-> Name of the bike: %s\n", vehicle);
    printf("-> Issue: Engine Issue\n");
    printf("-> Bill: Rs. 5000.00\n");
}
else if(problemtype == 4) {
    printf("----- Bill Format -----\n");
    printf("-> Name of the owner: %s\n", owner);
    printf("-> Name of the bike: %s\n", vehicle);
    printf("-> Issue: General Services\n");
    printf("-> Bill: Rs. 1000.00\n");
}
    else{
      printf("invalid problem");
    }
  }
  else{
    printf("Your vehicle service will be done after a while.");
  }
}
 else {
        printf("This service center does not accept vehicles other than 2-wheelers, 3-wheelers, and 4-wheelers.");
    }


return 0;
}
//
Ques - 1
--------------
A Strong Number is a number in which the sum of the factorial of its digits equals the number itself.

Example:

145 = 1! + 4! + 5! = 1 + 24 + 120 = 145 
2 = 2! = 2 

40585 = 4! + 0! + 5! + 8! + 5! = 40585
Check the given number is strong number or not by using nested while loop.
Example : 
Input as : 145
Output as : 145 is a strong number.

Example : 
Input as : 125
Output : 125 is not a strong number.


Ques - 2
---------------
Find All Palindrome Numbers in a Range  by using nested for loop and while loops.
Problem: Print all palindrome numbers between 1 and 1000.

Outer for → pick each number in range
Inner for → reverse digits

Example Output:
1 2 3 ... 121 131 ... 999

Ques - 3
-----------------
Find Prime Numbers in a Range  by using nested for loop.

Problem: Write a program to print all prime numbers between 1 and 50 using nested for loops.
Outer for → goes through numbers 1 to 50
Inner for → checks if a number is prime

Example Output:
2 3 5 7 11 13 17 19 23 29 31 37 41 43 47

Ques - 4
-------------------
Print All Perfect Numbers in a Range by using nested for loops.

Problem: A perfect number is one where the sum of divisors (excluding itself) equals the number.
Write a program to find all perfect numbers between 1 and 1000.

Outer for → numbers 1 to 1000
Inner for → sum divisors

Example Output:
6 28 496



// while loop
Q-1
------

Write a C program to find the Maximum digit in a given integer number. 
For example, if the input number is 153830, the output should be 8 since 8 is the highest digit in the number.

Sample input : 153830

Sample Output : 8 is highest digit in the number.
------

#include <stdio.h>
int main()
{
int n,i=0,d;
scanf("%d",&n);   //1234

while(n!=0){
   d=n%10;  
  if(d>i){
   i=d;
    
  }
  n=n/10;
}
printf("%d",i);

}


Q-2
------

Write a C program to calculate the power of a base number raised to an exponent using a while loop. 
The program should take two inputs: the base and the exponent. If either the base or the exponent is zero or negative, 
the program should display the message "Invalid input...Please enter positive values" and terminate. Otherwise, 
the program should calculate and display the result as base^exponent = result.

Sample input  : Enter base: 2
                Enter exponent: -5
Sample output : Invalid input...Please enter positive values

----------------------------
Sample input  : Enter base: 2
                Enter exponent: 5
Sample output : 2^5 = 32   

----------------------------

Sample input  : Enter base: 3
                Enter exponent: 4
Sample output : 3^4 = 81
------

#include <stdio.h>
int main()
{
int num,limit,i=1,result =1;
scanf("%d %d",&num,&limit);

while(i<=limit){
   result =result*num;
   i++;
}
  printf("%d",result);
}
// 2 4-->2*2*2*2


Q-3
-------


Write a C program that takes an integer N from the user and displays the square of all numbers from 1 to N using a while loop.

Sample Input:
	Enter a number: 4
Sample Output:
	1 4 9 16
---------
#include <stdio.h>
int main()
{
int num,i=1,result =1;
scanf("%d",&num);

while(i<=num){
   result =i*i;
   i++;
  printf(" %d",result);
}
}
// 2 -->1,4
