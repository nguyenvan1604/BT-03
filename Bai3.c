#include<stdio.h>

int _(int *p,int n, int k)
{

    if(*p%3 == 0)
        k++;
    if(n == 1)
        return k;
    return _(p+1,n-1,k);
}

int main()
{
    int a[9] = {1,2,3,4,6,6,12,5,9};
    int i ,n = 9, k = 0;
    for(i=0;i<n;i++)
        printf("%3d",a[i]);
    printf("\nSo phan tu chia het cho 3 cua mang tren la: %d",_(a,n,k));

    printf("\n");
    return 0;
}
