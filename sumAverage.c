#include <stdio.h>

int main ()
{  
    int physics,chemistry,maths;
    float average, sum;
    printf("Enter marks of Physics: ");
    scanf("%d",&physics);
    printf("Enter marks of Chemistry: ");
    scanf("%d",&chemistry);
    printf("Enter marks of Maths: ");
    scanf("%d",&maths);
    sum=physics+chemistry+maths;
    average=sum/3;
    printf("Sum of marks: %.2f\n",sum);
    printf("Average of marks: %.2f\n",average);

    float result=(average>=50)?
    printf("Result: Pass\n"): 
    printf("Result: Fail\n");

    return 0;
}