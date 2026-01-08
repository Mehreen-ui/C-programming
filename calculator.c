#include <stdio.h>

int main()
{
    int a,b,choice,result;

    Menu:
    printf("Enter the value of a and b\n");
    scanf("%d %d",&a,&b);
    printf("Menu\n");
    printf("Enter your choice:\n");
    printf("1 : Addition\n");
    printf("2 : Subtraction\n");
    printf("3 : Multiplication\n");
    printf("4 : Division\n");
    printf("5 : Exit the program\n");
    scanf("%d",&choice);

    switch(choice)
    {
        case 1:
        result=a+b;
        printf("result of addition =%d\n",result);
        goto Menu;
        
        case 2:
        result=a-b;
        printf("result of subraction=%d\n",result);
        goto Menu;

        case 3:
        result=a*b;
        printf("result of multiplication=%d\n",result);
        goto Menu;

        case 4:
        result=a/b;
        printf("result of division=%d\n",result);                               
        goto Menu;

        case 5:
        printf("Exiting the program\n");
        break;

        default:
        printf("Invalid option, please try again.\n");
        goto Menu;

    }  
    return 0;


}