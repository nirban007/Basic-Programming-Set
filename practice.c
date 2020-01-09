#include<stdio.h>
int main()
{
    char username[30];
    char fullname[30];
    int age;
    int i;
    float cgpa;
    char number[30];
    printf("Enter Username : \n");
    scanf("%s",&username);
    char password[55];

    printf("password:\n");
    int p=0;
    do{
        password[p]=getch();
        if(password[p]!='\r'){
            printf("*");
        }
        p++;
    }while(password[p-1]!='\r');
    password[p-1]='\0';
    getch();
    printf("\n");
    printf("Enter age : \n");
    scanf("%d", &age);
    printf("Enter CGPA : \n");
    scanf("%f", &cgpa);
    printf("Enter Phone Number : \n");
    scanf("%s", &number);
    printf("%s\n", username);
    printf("%s\n",password);
    printf("%.2f\n", cgpa);
    printf("%s",number);
    return 0;

    return 0;
}
