#include<stdio.h>
int main()
{
    double numb1,numb2;
    char sign;
    printf("Enter the first number:");
    scanf("%lf",&numb1);
    printf("Enter the second number:");
    scanf("%lf",&numb2);
    printf("Enter the sign:");
    scanf(" %c",&sign);
    
    switch(sign)
    {
        case '+':
         printf("%lf+%lf=%lf",numb1,numb2,(numb1+numb2));
         break;
        case '-':
         printf("%lf-%lf=%lf",numb1,numb2,(numb1-numb2));
         break;
        case '*':
          printf("%lf*%lf=%lf",numb1,numb2,(numb1*numb2));
          break;
        case '/':
          printf("%lf/%lf=%lf",numb1,numb2,(numb1/numb2));
          break;  
    }
    return 0;

}