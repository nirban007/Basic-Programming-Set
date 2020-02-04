#include<stdio.h>
int main()
{
    int a[10];
    int b[10];
    int *p;
    int *q;
    p=a;
    q=b;
    int i;
    printf("First array decimal address: \n\n");
    for(i=0;i<5;i++)
    {
        printf("%d\n\n", p+i);
    }
    printf("\n");
    printf("Second array decimal address: \n\n");
    for(i=0;i<5;i++)
    {
        printf("%d\n\n", q+i);
    }

    printf("First array first address : %d\n\n", &a[0]);
    printf("First array last address : %d\n\n", &a[5]);
    printf("Second array first address : %d\n\n", &b[0]);
    printf("Second array last address : %d\n", &a[5]);
    return 0;
}
