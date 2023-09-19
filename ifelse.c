// # include<stdio.h>
// int main(){
//     int a=5;
//     int b=20;
//     printf("%d",a+b);
// }

// # include<stdio.h>
// int main(){
//     int a=9;
//     int b=6;
//     printf("%d",a+b);
// }

// # include<stdio.h>
// int main(){
//     int a=7;
//     float b=9.8;
//     printf("%d%f",a+b);
// }

// // # include<stdio.h>
// // int main(){
// //     int a=13;
// //     int b=4;
// //     printf("%d%d",(13*4)/4);
    
// }

// # include<stdio.h>
// int main (){
//     int a=-15;
//     int b=6;
//     printf("%d%d",(-15*4/6));
// }

// #include <stdio.h>

// int main() {
//   int time = 22;
//   if (time < 10) {
//     printf("Good morning.");
//   } else if (time < 20) {
//     printf("Good day.");
//   } else {
//     printf("Good evening.");
//   }
//   return 0;
// }

// #include <stdio.h>

// int main() {
//   int myNum = 10;
  
//   if (myNum > 0) {
//     printf("10");
//   } else if (myNum < 0) {
//     printf("-10");
//   } else {
//     printf("0");
//   }
  
//   return 0;
// }

// # include<stdio.h>
// int main()
// {
// int m;
// printf("type a number:");
// scanf("%d",&m);

// }

// return 0;

// # include<stdio.h>
// int main()
// {
//     int i=1;
//     while(i<10){
//         printf("%s\n","dayal");
//         i++;
//         }
//     return 0;
// }

// # include<stdio.h>
// int main()
// {
//     int i=1;
//     while(i<=20){
//         printf("%d\n",i);
//         i++;
//     }
//     return 0;
// }

// # include<stdio.h>
// int main()
// {
//     int i=1;
//     while(i<=20)
//     {
//         if (i%2==0)
//         {
//             printf("%d\n",i);
//             }
//             else
//             {
//                 printf("%d\n",i+1);
//             i=i+2;
//         }
//     }
//             return 0;
// }

// # include<stdio.h>
// int main()
// {
//     int i=11;
//     while(i<=110)
//     {
//         printf("%d\n",i);
//         i=i+11;
//     }
//     return 0;
// }
// #include<stdio.h>
// int main()
// {
//     int i,j;
//     for(i=1;i<=5;i++){
//         for (j=1;j<=10;j++){
//             printf("%d ",i*j);
//         }printf("\n");
//     }
// return 0;
// }

// # include<stdio.h>
// int main(){
//     int i=1;
//     while(i==1){
//         printf("%d\n",i);
//         i=i-1;
//     }
//     return 0;
// }

// Write a program in C to display the first 10 natural numbers.
// Expected Output
// # include<stdio.h>
// int main()
// {
//     int i=1;
//     while (i<=10)
//     {
//         printf("%d\n",i);
//         i++;
//     }
//     return 0;
    
// }

//  Write a C program to compute the sum of the first 10 natural numbers.
// Expected Output :
// # include<stdio.h>
// int main()
// {
//     int i=0;
//     int sum=0;
//     while (i<=10)
//     {
//         // printf("%d\n",i);
//         sum=sum+i;
//         i++;
        
//     }
//     printf("%d",sum);
//     return 0;
    
// }

// Write a program in C to display n terms of natural numbers and their sum.
// Expected Output :
// # include<stdio.h>
// int main()
// {
//     int n;
//     scanf("%d%s",&n,"enter a number");
//     int i=1;
//     int sum=0;
//     while (i<=n){
//         sum=sum+i;
//         i++;

//     printf("%d",sum);
//     }
// return 0;
// }

// Write a program in C to read 10 numbers from the keyboard and find their sum and average.
// Input the 10 numbers:

// # include<stdio.h>
// int main(){

// }

// ....loop--for loop--while loop--do while loop.....
// # include<stdio.h>
// int main()
// {
//     int i=1;
//     while(i<=5)
//     {
//      printf("anjali\n");
//      i++;
//     }

// }


// from flowchart Questions.....................................................................
// Construct a flowchart to show how to determine the greater of two given numbers.
// #include <stdio.h>
// int main()
// {
//     int A, B;
//     scanf("%d%d", &A, &B);
//     if (A > B) {
//         printf("A is greater\n");
//     } else if (B > A) {
//         printf("B is greater\n");
//     } else {
//         printf("A and B are equal\n");
//     }

//     return 0;
// }


//  Construct a flowchart to print the name of months.(Input a number from the user in the range 1 to 12 and print January for 1, February for 2 and so on)
// #include <stdio.h>
// int main()
// {
//     int monthNumber;

//     printf("Enter a number (1 to 12): ");
//     scanf("%d", &monthNumber);

//     switch (monthNumber) {
//         case 1:
//             printf("January\n");
//             break;
//         case 2:
//             printf("February\n");
//             break;
//         case 3:
//             printf("March\n");
//             break;
//         case 4:
//             printf("April\n");
//             break;
//         case 5:
//             printf("May\n");
//             break;
//         case 6:
//             printf("June\n");
//             break;
//         case 7:
//             printf("July\n");
//             break;
//         case 8:
//             printf("August\n");
//             break;
//         case 9:
//             printf("September\n");
//             break;
//         case 10:
//             printf("October\n");
//             break;
//         case 11:
//             printf("November\n");
//             break;
//         case 12:
//             printf("December\n");
//             break;
//         default:
//             printf("Invalid input\n");
//     }

//     return 0;
// }



// Construct a flowchart to take two sides as input and check whether it is a rectangle or a square.

// #include <stdio.h>
// int main()
// {
//     float side1, side2;
//     scanf("%f%f",&side1, &side2);

//     if (side1 == side2) {
//         if (side1 > 0) {
//             printf("It's a Square\n");
//         } else {
//             printf("Invalid input: Both sides should be greater than zero\n");
//         }
//     } else {
//         if (side1 > 0 && side2 > 0) {
//             printf("It's a Rectangle\n");
//         } else {
//             printf("Invalid input: Both sides should be greater than zero\n");
//         }
//     }

//     return 0;
// }


// Construct a flowchart to check whether a number is the smallest 4 digit number.

// #include <stdio.h>
// int main()
// {
//     int number;
//     scanf("%d", &number);

//     if (number < 1000) {
//         printf("It's not a 4-digit number.\n");
//     } else if (number == 1000) {
//         printf("It's the smallest 4-digit number.\n");
//     } else if (number > 9999) {
//         printf("It's greater than a 4-digit number.\n");
//     } else {
//         printf("It's a 4-digit number, but not the smallest one.\n");
//     }

//     return 0;
// }



// Construct a flowchart to check whether a number is divisible by 7 or not.

// #include <stdio.h>
// int main()
// {
//     int number;
//     scanf("%d", &number);

//     if (number % 7 == 0) {
//         printf("%d is divisible by 7.\n", number);
//     } else {
//         printf("%d is not divisible by 7.\n", number);
//     }

//     return 0;
// }


// Take an integer N as input and check whether it ends with 3 or 7. If it ends with 3, print “ends with 3”, if it ends with 7, print “ends with 7”, otherwise print the number itself.

// #include <stdio.h>
// int main()
// {
//     int N;
//     scanf("%d", &N);
//     if (N % 10 == 3) {
//         printf("ends with 3\n");
//     } else if (N % 10 == 7) {
//         printf("ends with 7\n");
//     } else {
//         printf("%d\n", N);
//     }

//     return 0;
// }



// Construct a flowchart to obtain the length (L) and breadth (B) of a rectangle and check whether its area is greater or perimeter is greater or both are equal.

// #include <stdio.h>
// int main()
// {
//     float L, B, A, P;

//     // Input length and breadth
//     scanf("%f%f",&L, &B);

//     // Calculate area and perimeter
//     A = L * B;
//     P = 2 * (L + B);

//     // Compare area and perimeter
//     if (A > P) {
//         printf("Area is greater\n");
//     } else if (A < P) {
//         printf("Perimeter is greater\n");
//     } else {
//         printf("Both are equal\n");
//     }

//     return 0;
// }


//  Construct a flowchart to check whether a number is negative, positive or zero.

// #include <stdio.h>
// int main()
// {
//     int number;
//     scanf("%d", &number);

//     // Check if the number is negative, positive, or zero
//     if (number < 0) {
//         printf("The number is Negative.\n");
//     } else if (number > 0) {
//         printf("The number is Positive.\n");
//     } else {
//         printf("The number is Zero.\n");
//     }

//     return 0;
// }



// Construct a flowchart to find a maximum between three numbers.

// #include <stdio.h>
// int main()
// {
//     int a, b, c;
//     scanf("%d %d %d", &a, &b, &c);
//     int max = a; 

//     if (b > max) {
//         max = b;
//     }
//     if (c > max) {
//         max = c; 
//     }
//     printf("The maximum number is: %d\n", max);

//     return 0;
// }


//  Construct a flowchart to input electricity unit charges and calculate the total electricity
// bill according to the given condition:
// For the first 50 units Rs. 0.50/unit
// For next 100 units Rs. 0.75/unit
// For the next 100 units Rs. 1.20/unit
// For unit above 250 Rs. 1.50/unit
// An additional surcharge of 20% is added to the bill

// #include <stdio.h>
// int main()
// {
//     float units, total_cost, surcharge, total_bill;

//     scanf("%f", &units);
//     if (units <= 50) {
//         total_cost = units * 0.50;
//     } else if (units <= 150) {
//         total_cost = (50 * 0.50) + ((units - 50) * 0.75);
//     } else if (units <= 250) {
//         total_cost = (50 * 0.50) + (100 * 0.75) + ((units - 150) * 1.20);
//     } else {
//         total_cost = (50 * 0.50) + (100 * 0.75) + (100 * 1.20) + ((units - 250) * 1.50);
//     }
//     surcharge = 0.20 * total_cost;
//     total_bill = total_cost + surcharge;
//     printf("Total electricity bill: Rs. %.2f\n", total_bill);

//     return 0;
// }


// 
// Accept the number of days from the user and calculate the charge for the library
// according to the following:
// First five days: Rs 2/day.
// Next 5 days: Rs 3/day.
// Next 5 days: Rs 4/day
// After 15 days: Rs 5/day

// #include <stdio.h>
// int main()
// {
//     int days;
//     float total_charge = 0.0;

//     scanf("%d", &days);

//     if (days >= 1 && days <= 5) {

//         total_charge = days * 2.0;
//     } else if (days >= 6 && days <= 10) {

//         total_charge = 5 * 2.0 + (days - 5) * 3.0;
//     } else if (days >= 11 && days <= 15) {
        
//         total_charge = 5 * 2.0 + 5 * 3.0 + (days - 10) * 4.0;
//     } else if (days > 15) {
        
//         total_charge = 5 * 2.0 + 5 * 3.0 + 5 * 4.0 + (days - 15) * 5.0;
//     } else {
//         printf("Invalid number of days. Please enter a positive number of days.\n");
//         return 1; 
//     }

//     printf("The library charge for %d days is Rs %.2f\n", days, total_charge);

//     return 0;
// }




// You have denominations of rupee notes in the following form—1, 2, 5, 10, 20, 100, 200,
// 500, 2000. Take any amount from the user and print the minimum number of notes
// needed to add up to that number.

// #include <stdio.h>
// int main()
// {
//     int amount;
//     int denominations[] = {2000, 500, 200, 100, 20, 10, 5, 2, 1};
//     int notes[9] = {0}; 

//     scanf("%d", &amount);

//     if (amount <= 0) {
//         printf("Invalid amount. Please enter a positive amount.\n");
//         return 1; 
//     }

//     for (int i = 0; i < 9; i++) {
//         notes[i] = amount / denominations[i];
//         amount %= denominations[i];
//     }

//     printf("Minimum number of notes needed:\n");
//     for (int i = 0; i < 9; i++) {
//         if (notes[i] > 0) {
//             printf("%d x Rs %d notes\n", notes[i], denominations[i]);
//         }
//     }

//     return 0;
// }


// Construct a flowchart to categorize the shape of a quadrilateral as either a square,
// rhombus, rectangle, parallelogram, or irregular quadrilateral, having input the lengths of
// the four sides and one internal angle.

// #include <stdio.h>
// int main()
// {
//     double side1, side2, side3, side4, angle;
    
//     scanf("%lf %lf %lf %lf", &side1, &side2, &side3, &side4);
    
//     printf("Enter the internal angle (in degrees): ");
//     scanf("%lf", &angle);
    
//     if (side1 == side2 && side2 == side3 && side3 == side4) {
//         if (angle == 90) {
//             printf("It's a square.\n");
//         } else {
//             printf("It's a rhombus.\n");
//         }
//     } else if (side1 == side3 && side2 == side4) {
//         if (angle == 90) {
//             printf("It's a rectangle.\n");
//         } else {
//             printf("It's a parallelogram.\n");
//                }
//     } else {
//         printf("It's an irregular quadrilateral.\n");
//     }
    
//     return 0;
// }


// The grades in a certain class are determined by coursework and a written examination.
// Both components of the assessment carry a maximum of 50 points.
// (i) A student must score a total of 45% or more in order to pass
// (ii) A total grade of 44% is moderated to 45%
// (iii) Each component must be passed with a minimum of 20 points
// (iv) If a student scores 45% or more, but does not achieve the minimum grade in
// one component, he is given a technical fail of 44%, which is not moderated to
// 45%.

// #include <stdio.h>
// int main()
// {
//     int coursework, exam, total;
//     scanf("%d%d",&coursework, &exam);
    
//     if (coursework < 20 || exam < 20) {
//         printf("You failed one or both components. Your total grade is 0%%.\n");
//     } else {
//         total = coursework + exam;
        
//         if (total == 44) {
//             total = 45;
//         }
        
//         if (total >= 45) {
//             printf("Congratulations! You passed with a total grade of %d%%.\n", total);
//         } else {
//             printf("You failed with a total grade of %d%%.\n", total);
//         }
//     }
    
//     return 0;
// }


//  Write a program to check if the given number is divisible by 5, 11, both or none.
// a. If it is divisible by 5 then print 5
// b. If it is divisible by 11 then print 11
// c. If it is divisible by 5 and 11 then print “Both”
// d. If it is not divisible by 5 and 11 then print “None”

// #include <stdio.h>
// int main()
// {
//     int num;
//     scanf("%d", &num);

//     if (num % 5 == 0 && num % 11 == 0) {
//         printf("Both\n");
//     }
//     else if (num % 5 == 0) {
//         printf("5\n");
//     }
//     else if (num % 11 == 0) {
//         printf("11\n");
//     }
//     else {
//         printf("None\n");
//     }

//     return 0;
// }


//  Find the second max of 3 numbers. (Use minimum number of comparisons)

// #include <stdio.h>
// int main()
// {
//     int num1, num2, num3;
//     scanf("%d %d %d", &num1, &num2, &num3);

//     int max, secondMax;

//     max = num1;

//     if (num2 > num3) {
//         secondMax = num2;
//     } else {
//         secondMax = num3;
//     }

//     if (num2 > num1) {
//         secondMax = num1;
//         max = num2;
//     }
//     if (num3 > max) {
//         secondMax = max;
//         max = num3;
//     }
//     printf("The second maximum is: %d\n", secondMax);

//     return 0;
// }



// Find the second max of 4 numbers. (Use minimum number of comparisons)

// #include <stdio.h>
// int main()
// {
//     int num1, num2, num3, num4;
//     int max, secondMax;

//     scanf("%d %d %d %d", &num1, &num2, &num3, &num4);

//     if (num1 > num2) {
//         max = num1;
//         secondMax = num2;
//     } else {
//         max = num2;
//         secondMax = num1;
//     }

//     if (num3 > max) {
//         secondMax = max;
//          max = num3;
//     } else if (num3 > secondMax && num3 != max) {
//         secondMax = num3;
//     }

//     if (num4 > max) {
//         secondMax = max;
//         max = num4;
//     } else if (num4 > secondMax && num4 != max) {
//         secondMax = num4;
//     }

//     printf("The second maximum number is: %d\n", secondMax);

//     return 0;
// }


// .............................LOOP............................

// Write a program to print the first 10 natural numbers in reverse order.

// #include <stdio.h>
// int main()
// {
//     int n = 10;
//     int i;

//     for (i = n; i >= 1; i--) {
//         printf("%d\n", i);
//     }

//     return 0;
// }


//  Write a program to print the sum of the first 10 Natural numbers.

// #include <stdio.h>
// int main()
// {
//     int n = 10;
//     int sum = 0;

//     for (int i = 1; i <= n; i++) {
//         sum += i;
//     }

//     printf("The sum of the first %d natural numbers is: %d\n", n, sum);

//     return 0;
// }


//  Write a program to print the sum of the first 10 Even numbers.

// #include <stdio.h>
// int main()
// {
//     int count = 0; 
//     int num = 2;   
//     int sum = 0;  

//     while (count < 10) {
//         sum += num;  
//         num += 2;     
//         count++;      
//     }

//     printf("The sum of the first 10 even numbers is: %d\n", sum);

//     return 0;
// }


//  Write a program to print a table of a number entered from the user.

// #include <stdio.h>
// int main()
// {
//     int number, range;
//     scanf("%d%d",&number, &range);

//     if (range < 0) {
//         printf("Please enter a non-negative range.\n");
//         return 1;  
//     }

//     printf("Multiplication table for %d:\n", number);
//     for (int i = 1; i <= range; i++) {
//         printf("%d x %d = %d\n", number, i, number * i);
//     }

//     return 0;
// }



//  Write a program to display all even numbers that fall between two numbers (exclusive both numbers)entered by the user.

// #include <stdio.h>
// int main()
// {
//     int start, end;
//     scanf("%d%d", &start, &end);

//     if (start >= end) {
//         printf("Invalid input. The start number must be less than the end number.\n");
//         return 1;
//     }

//     printf("Even numbers between %d and %d (exclusive):\n", start, end);

//     for (int i = start + 1; i < end; i++) {
//         if (i % 2 == 0) {
//             printf("%d\n", i);
//         }
//     }

//     return 0;
// }




//  Write a program to check whether a number is prime or not.

// #include <stdio.h>
// #include <stdbool.h>

// bool isPrime(int num)
// {
//     if (num <= 1) {
//         return false;
//     }
//     for (int i = 2; i * i <= num; i++) {
//         if (num % i == 0) {
//             return false;
//         }
//     }
//     return true;
// }

// int main()
// {
//     int num;
//     scanf("%d", &num);
    
//     if (isPrime(num)) {
//         printf("%d is a prime number.\n", num);
//     } else {
//         printf("%d is not a prime number.\n", num);
//     }
    
//     return 0;
// }




// Write a program to find the sum of the digits of a number accepted from the user.

// #include <stdio.h>
// int main()
// {
//     int num, digit, sum = 0;
//     scanf("%d", &num);

//     while (num > 0) {
//         digit = num % 10; 
//         sum += digit;    
//         num /= 10;        
//     }

//     printf("Sum of the digits: %d\n", sum);

//     return 0;
// }



//  Write a program to find the product of the digits of a number accepted from the user.

// #include <stdio.h>
// int main()
// {
//     int number, digit, product = 1;
//     scanf("%d", &number);

//     if (number < 0) {
//         printf("Please enter a non-negative number.\n");
//         return 1; 
//     }

//     while (number > 0) {
//         digit = number % 10;
//         product *= digit;
//         number /= 10;
//     }

//     printf("The product of the digits is: %d\n", product);

//     return 0; 
// }



// Write a program to reverse the number accepted by the user.

// #include <stdio.h>
// int main()
// {
//     int num, reversedNum = 0, remainder;
//     scanf("%d", &num);

//     while (num != 0) {
//         remainder = num % 10;
//         reversedNum = reversedNum * 10 + remainder;
//         num = num / 10;
//     }

//     printf("Reversed number: %d\n", reversedNum);

//     return 0;
// }




//  Write a program to find the product of the digits of a number accepted from the user.

// #include <stdio.h>
// int main()
// {
//     int num, digit, product = 1;
//     scanf("%d", &num);

//     while (num != 0) {
//         digit = num % 10;
//         product *= digit;
//         num /= 10;
//     }

//     printf("Product of the digits: %d\n", product);

//     return 0;
// }



// Write a program to reverse the number accepted by the user.

// #include <stdio.h>
// int main()
// {
//     int num, reversedNum = 0, remainder;
//     scanf("%d", &num);

//     while (num != 0) {
//         remainder = num % 10;
//         reversedNum = reversedNum * 10 + remainder;
//         num = num / 10;
//     }

//     printf("Reversed number: %d\n", reversedNum);

//     return 0;
// }



//  Write a program to reverse the number accepted by the user.

#include <stdio.h>
int main()
{
    int num, reversedNmum = 0, remainder;
    scanf("%d", &num);

    while (num != 0)
    {
        remainder = num % 10;
        reversedNum = reversedNum * 10 +remainder;
        num = num / 10;
    }

    printf("Reversed number:%d\n", reverseNum);

    return 0;
}
