 Q-1
----------
An elevator can hold 500 kg max. Each adult weighs 75 kg, each child weighs 30 kg.
Write a program to check if the total weight is within the limit.

Example:
Input: Adults = 4, Children = 3  
Output: Safe to move

Input: Adults = 6, Children = 5  
Output: Overload! Reduce weight.

Q-2
-------
Daylight Duration
You’re given sunrise and sunset times in hours (24-hour format).
Check if the day is:

Short Day → Less than 12 hours daylight

Long Day → 12 hours or more daylight

Example:
Input: Sunrise=6, Sunset=18 → Long Day  
Input: Sunrise=7, Sunset=17 → Short Day

Q-3
-----------
Write a C program that reads two integers and prints the one closer to zero.
If both numbers are at the same distance from zero, print the larger number.

Example 1:
Input: -5  3  
Output: 3

Example 2:
Input: -2  2  
Output: 2

Example 3:
Input: -1  -3  
Output: -1
Constraints:

Use only if–else statements for decision making.

You may use the abs() function from <stdlib.h>.




Q-4
---------
Write a C program that reads:
The number of students in a classroom.
The number of chairs available.

If the number of students is greater than the number of chairs, print how many extra chairs need to be arranged.
Otherwise, print "All students are seated perfectly".

Example 1:
Input:  
Students: 30  
Chairs: 25  

Output:  
Need 5 more chairs

Example 2:
Input:  
Students: 20  
Chairs: 20  

Output:  
All students are seated perfectly

Example 3:
Input:  
Students: 15  
Chairs: 18  

Output:  
All students are seated perfectly

Q - 5
-------------
Temperature Unit Converter
Write a C program that:
Reads a temperature value (integer or float) and a character (C or F).
If the character is C, it means the given temperature is in Celsius, so convert it to Fahrenheit.
If the character is F, it means the given temperature is in Fahrenheit, so convert it to Celsius.
Print the converted temperature value.

Formula:

Celsius → Fahrenheit: F = (C × 9/5) + 32
Fahrenheit → Celsius: C = (F − 32) × 5/9

Example:
Input: 100 C  
Output: 212.00 F  

Input: 98.6 F  
Output: 37.00 C


// 

1. CompareTwoNumber
Problem:
Create a C program that reads two integers from the user and prints "Equal" if they are equal, and "Not Equal" otherwise. (Use only if)

Sample Input:
Enter a number : 10 10

Sample Output:
Equal

Solution:
#include<stdio.h>
int main(){
int a,b;
scanf("%d %d",&a,&b);
if(a==b){
printf("Equal");
}
if(a!=b){
printf("Not Equal");
}
return 0;
}

2. NumberDivisible
Problem:
Write a C program to check whether a number is divisible by 5 and 11 or not.

Sample Input:
Enter a number : 55

Sample Output:
55 is divisible by both 5 and 11

Solution:
#include<stdio.h>
int main(){
int a;
scanf("%d",&a);
if(a%5==0 && a%11==0){
printf("%d is divisible by both 5 and 11",a);
}
if(a%5!=0 && a%11!=0){
printf("%d is Not divisible by both 5 and 11",a);
}
return 0;
}

3. OddEven
Problem:
Develop a C program that takes an integer input and checks whether it is even or odd. Print "Even" if it's even, and "Odd" if it's odd. (Use only if)

Sample Input:
Enter a Integer : 20

Sample Output:
Even

Solution:
#include<stdio.h>
int main(){
int a;
scanf("%d",&a);
if(a%2==0 ){
printf("Even");
}
if(a%2!=0){
printf("Odd");
}
return 0;
}

4. HourFormat
Problem:
Write a C program that takes an hour in the 24-hour format as input and identifies the time of day as "Morning," "Afternoon," "Evening," or "Night." Implement this using a series of if statements. Ensure that the program also checks for invalid input, displaying an appropriate message if the entered hour is not within the valid range (0-23).

Sample Input:
Enter the hour (24-hour format): 13

Sample Output:
It's Afternoon.

Solution:
#include<stdio.h>
int main(){
int a;
scanf("%d",&a);
if (a >= 0 && a < 12) {
printf("It's Morning.");
}
if (a >= 12 && a < 15) {
printf("It's Afternoon.");
}
if (a >= 15 && a < 21) {
printf("It's Evening.");
}
if (a >= 21 && a <= 24) {
printf("It's Night.");
}
if (a < 0 || a > 24) {
printf("Invalid hour.");
}
return 0;
}

5. CheckVowel
Problem:
Develop a C program that reads a character from the user and prints "Vowel" if the character is a vowel (a, e, i, o, u or their uppercase equivalents), and "Consonant" if it's a consonant.

Sample Input:
Enter a character : I

Sample Output:
Vowel

Solution:
#include<stdio.h>
int main(){
char ch;
scanf("%c",&ch);
if(ch=='a'|| ch=='e' || ch=='i' || ch=='o' || ch=='u' ||
ch=='A'|| ch=='E' || ch=='I' || ch=='O' || ch=='U' )
{
printf("Vowel");
}
if(ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u' &&
ch != 'A' && ch != 'E' && ch != 'I' && ch != 'O' && ch != 'U'){
printf("Consonant");
}
return 0;
}

