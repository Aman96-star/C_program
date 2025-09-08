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
