# 3n-1-Problem

# Header Files
```
#include <stdio.h>
#include <conio.h>
```

`#include <stdio.h>`: This header file is necessary for input and output functions like printf and scanf1.

`#include <conio.h>`: This header file is used for console input/output functions like getch2.

# Main Function
```
int main() {
    int a, n, c = 0;
```
int main(): This is the main function where the program execution begins.
int a, n, c = 0;: Declares three integer variables: a (input number), n (intermediate number), and c (counter for attempts).

# Input
    printf("Enter an Integer Number: ");
    scanf("%d", &a);

printf("Enter an Integer Number: ");: Prompts the user to enter an integer.
scanf("%d", &a);: Reads the integer input from the user and stores it in variable a1.

# Loop and Conditions
  
```
  while(a > 1) {
        if(a % 2 == 0) {
            n = a / 2;
            printf("%d\n", n);
        }
        else {
            n = (a * 3) + 1;
            printf("%d\n", n);
        }
        a = n;
        c++;
    }
```
while(a > 1): Continues looping as long as a is greater than 1.
if(a % 2 == 0): Checks if a is even. If true, divides a by 2 and assigns the result to n.
else: If a is odd, multiplies a by 3, adds 1, and assigns the result to n.
printf("%d\n", n);: Prints the value of n.
a = n;: Updates a with the value of n.
c++;: Increments the counter c by 1.
# Output
    printf("It took %d attempts!", c);
    getch();
    return 0;                                                                                                                                                                                                                                                                  
         }

printf("It took %d attempts!", c);: Prints the total number of attempts it took to reduce a to 1.
getch();: Waits for a key press before closing the console window2.
return 0;: Ends the main function and returns 0 to the operating system, indicating successful execution.
This program essentially implements the Collatz conjecture, which is a sequence defined as follows: start with any positive integer ( n ). Then each term is obtained from the previous term as follows: if the previous term is even, the next term is one half of the previous term. If the previous term is odd, the next term is 3 times the previous term plus 1. The conjecture is that no matter what value of ( n ), the sequence will always reach 1.
