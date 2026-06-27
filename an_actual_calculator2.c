#include<stdio.h>
int main()
{
    double numb1, numb2;
    char sym;
    printf("Enter your calculation:");
    scanf("%lf %c %lf", &numb1, &sym, &numb2);
      switch(sym)
    {
        case '+':
         printf("%.2lf+%.2lf=%.2lf",numb1,numb2,(numb1+numb2));
         break;
        case '-':
         printf("%.2lf-%.2lf=%.2lf",numb1,numb2,(numb1-numb2));
         break;
        case '*':
          printf("%.2lf*%.2lf=%.2lf",numb1,numb2,(numb1*numb2));
          break;
        case '/':
        if(numb2==0)
        {
            printf("Math error");
        }
        else
        {
          printf("%.2lf/%.2lf=%.2lf",numb1,numb2,(numb1/numb2));
        }  
          break;  
    }
    return 0;
}