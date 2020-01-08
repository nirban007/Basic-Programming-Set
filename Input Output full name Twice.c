#include<stdio.h>
int main()
{
    char name[20];
    scanf ("%[^\n]%*c", name);
    printf("%s\n", name);
    scanf ("%[^\n]%*c", name);
    printf("%s\n", name);
    return 0;
}
