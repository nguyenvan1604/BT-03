#include<stdio.h>

int _(int n)
{
    if(n/10 == 0)
        return n%10;
    int k = _(n/10);
    if(k < n%10)
        return n%10;
    return k;
}

int main()
{
    int n;
    printf("Nhap n: ");
    scanf("%d",&n);
    printf("Chu so lon nhat trong so %d la: %d",n,_(n));

    printf("\n");
    return 0;
}
