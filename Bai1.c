#include <stdio.h>

float f(int n)
{
    if(n<2)
        return 1;
    if(n>=2 && n<10)
        return (f(n-1))/(n-10) + f(n-2);
    if(n==10)
        return 0;
    return f(n-1) + f(n-2) + 4/5;
}

int main()
{
    int n;
    printf("Nhap n: ");
    scanf("%d",&n);
    printf("%.2f",f(n));

    printf("\n");
    return 0;
}
