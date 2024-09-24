#include <stdio.h>
#include <conio.h>

int main()
{
    int a, n, c = 0;

    printf("Enter an Integer Number: ");
    scanf("%d", &a);

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
    printf("It took %d attempts!", c);
    getch();

    return 0;
}
