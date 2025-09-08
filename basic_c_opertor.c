#include <stdio.h>
int main()
{
  int dsa =38 , cn=34, os= 35, sdlc=78, oops=20;
    // printf("type a marks of dsa : %d\n",dsa);

    // printf("type a marks of cn : %d\n",cn);
   
    // printf("type a marks of os : %d\n",os);
   
    // printf("type a marks of sdlc : %d\n",sdlc);

    // printf("type a marks of oops : %d\n",oops);
    int count =0,result =0;
    dsa>=35 && count++;
    cn>=35 && count++;
    os>=35 && count++;
    sdlc>=35 && count++;
    oops>=35 && count++;
    
    result =5-count;
        printf("pass in  %d , fail in %d",count,result);

}

// input mrk 5 sub 
// subj have more than 35 and less than 35
// logical and or operator


2nd que
#include <stdio.h>
int main()
{
  int cp =3500, profit =27*3500/100;
  
  int sp =0;
  sp =cp +profit;
  printf(" the selling price sp is %d\n",sp);
  
  profit =sp-cp;
    printf(" the profit is %d\n",profit);
  
  float vat =12.7*sp/100;
    printf(" the vat is %f\n",vat);
  
  float sc =3.87*sp/100;
    printf(" the sc is %f",sc);

}

// shop price 3500, sell profit 27%, vat 12.7% seriv ch 3.87%

3rd question 


4th que

#include<stdio.h>
#include<stdlib.h>
int main() {
int a =10,b=20;

int max = (a+b+ abs(a-b))/2;
printf("max num is %d",max);

}

5th que 
#include<stdio.h>
int main() {
int a=123;
int result=0;

int count1 =a%10;
int count2 =(a/10)%10;
int count3 =(a/100)%10;
result =count1*100+count2*10+count3;



printf("result %d",result);
}

//
1 st program

#include <stdio.h>
int main()
{
    int unit;
    scanf("%d",&unit);
    
    (unit<=100)?printf("%.2f",unit*3):printf("%.2f",unit*4.50);
}


2nd
#include<stdio.h>

// a ,b input
// c input (operaor)
// sol= 

int main(){
  int a,b;
  char op;
  scanf("%d %d %c",&a,&b,&op);
  
   (op == '+') ? printf("%d", a + b) :
    (op == '-') ? printf("%d", a - b) :
    (op == '*') ? printf("%d", a * b) :
    (op == '/') ? printf("%.2f",a/b) :
    (op == '%') ? printf("%d", a%b) :
                  printf("invalid");
  
  // (op=='+' || op=='-' ||op=='*' ||op=='/' ||op=='%')?printf("%d",a ,op,b):printf("invalid");
  
  
}

3rd
#include <stdio.h>
int main()
{
   int a;
   scanf("%d",&a);
   
   (a>=90)?printf("Grade A"):
   (a>=80 && a<=89)?printf("Grade B"):
   (a>=70 && a<=79)?printf("Grade C"):
   (a>=60 && a<=69)?printf("Grade D"):
   (a<=60)?printf("Grade F"):printf("invalid");
   
}


//List que:
Write a C program that takes the marks of a student in three subjects as input and prints whether the student has passed or failed in three subject using  if statement.
	if marks is above 35 then pass and student is fail in any one subject then fail.
1. Sample input  :  
		Enter three subject marks : 57 66 88
Sample output : 
		Result is pass 

Sample input  :  
		Enter three subject marks : 71 64 32
Sample output : 
		Result is Fail
Sample Input
57
66
88
Sample Output
Result is pass

--------------------------------
#include<stdio.h>
int main() {
int a,b,c;
scanf("%d %d %d",&a,&b,&c);
if(a<35 || b<35|| c<35){
  printf("Result is Fail");
}
else{
  printf("Result is pass");
}
return 0;
}
--------------------------------
2. 
MaxBetweenThree
Write a C program to find maximum between three numbers.

Sample input  : int a = 100, b = 200, c = 300
Sample output : 300
Sample Input
100 200 300
Sample Output
300
------------------------------
#include<stdio.h>
int main() {
int a,b,c;
scanf("%d %d %d",&a,&b,&c);
if(a>b && a>c){
  printf("%d",a);
}
else if(b>a && b>c){
  printf("%d",b);
}
else{
  printf("%d",c);
}
return 0;
}
------------------------------
NumberOfDaysInMonth
Write a C program to enter month number between(1-12) and print number of days in month using if else. How to print number of days in a given month using if else in C programming. Logic to find number of days in a month in C program. 



Input as :

Enter month number (1-12): 4

Output as :

Number of days: 30
Sample Input
4
Sample Output
Number of days: 30

----------------------------
#include<stdio.h>
int main() {
int m;
// 1,3,5,7,8,10,12 -->31
// 4,6,11,9 -->30
scanf("%d ",&m);
if(m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12){
  printf("31");
}
else if (m==4 || m==6 || m==11 ||m==9) {
  printf("30");
}
else{
    printf("29");
}
return 0;
}
 --------------------
5.
BonusEligibility
Write a C program using else if statements to determine the type of bonus an employee is eligible for based on their years of service.
-Read year on service from the user.

- If an employee has less than 2 years of service, they are not eligible for a bonus.
- If an employee has between 2 and 4 years of service, they are eligible for a 10% bonus.
- If an employee has between 5 and 9 years of service, they are eligible for a 15% bonus.
- If an employee has 10 or more years of service, they are eligible for a 20% bonus.

 Case 1:
Input: 
	Enter years Of Service = 12
Output: 
	Employee is eligible for a 20% bonus

 Case 2:
Input: 
	Enter years Of Service = 7
Output: 
	Employee is eligible for a 15% bonus

 Case 3:
Input:
	 Enter years Of Service = 3
Output:
	 Employee is eligible for a 10% bonus

 Case 4:
Input: 
	Enter years Of Service = 1
Output:
	 Employee is not eligible for a bonus
Sample Input
12
Sample Output
20% bonus

--------------------------------------
#include<stdio.h>
int main() {
int s;

scanf("%d",&s);
if(s<2){
  printf("Not Eligible ");
}
else if (s>2 && s<4) {
  printf(" they are eligible for a 10% bonus.");
}
else if(s>5 && s<9){
    printf(" 15%% bonus");
}
else{
    printf("20%% bonus");
}
return 0;
}
----------------
6. 
CalculateGrades

Problem :-
-----------
You are tasked with writing a C program that determines the grade of a student based on their total marks. The total marks are out of 100. The grading system is as follows:

if percentage is 
-----------------
	-> 90 to 100: Grade A
	-> 80 to 89: Grade B
	-> 70 to 79: Grade C
	-> 60 to 69: Grade D
	-> Below 60: Grade F

Write a C program that takes the total marks as input and prints the corresponding grade using an if-else ladder.

Example Input :-
-----------------
Enter the total marks: 85

Example Output:
---------------
Grade B

Additional Test Cases:
----------------------

Test Case 1:
-------------
Input: 92
Output: Grade A

Test Case 2:
--------------
Input: 75
Output: Grade C

Test Case 3:
-------------
Input: 58
Output: Grade F
Sample Input
85
Sample Output
Grade B
--------------------
#include<stdio.h>
int main() {
int s;

scanf("%d",&s);
if(s>90 && s<100){
  printf("Grade A");
}
else if (s>80 && s<89) {
  printf("Grade B");
}
else if(s>70 && s<79){
    printf(" Grade C");
}
else if(s>60 && s<69){
    printf("Grade D");
}
else if(s<60){
    printf("Grade F");
}
else{
    printf("Invalid marks entered.");
}
return 0;
}
----------	