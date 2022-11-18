#include <stdio.h>

int gcd(int m, int n);

// driver
int main() {
    int m, n;
    printf("Hello, Find The Greatest Common"
           " Denominator of two Numbers!\n");
    printf("Input the two Desired Numbers with a space between them: ");
    scanf("%d", &m);
    scanf("%d", &n);
    printf("The GCD is ");
    printf("%d", gcd(m, n));
    return 0;
}

int gcd(int m, int n)
{
    int r = m % n;

    if (r == 0)
        return n;
    else
    {
        while (r != 0)
        {
            m = n;
            n = r;
            r = m % n;
        }
        return n;
    }
}


