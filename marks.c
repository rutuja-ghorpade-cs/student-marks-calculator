#include<stdio.h>
void main()
{
     float m1,m2,m3,total,percentage;
     
     printf("Enter marks of 3 subjects");
     scanf("%f %f %f",&m1,&m2,&m3);
     
     total = m1 + m2 + m3;
     percentage =( total/300) * 100;
     
     printf("total marks = %.2f\n",total);
     printf("percentage = %.2f%\n",percentage);
     
     if(percentage>=40)
     {
     printf("Result:pass\n");
     }
     else
     {
     printf("Result:fail\n");
     }
}     