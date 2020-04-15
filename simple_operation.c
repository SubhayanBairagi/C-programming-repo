#include<stdio.h>
#include<stdlib.h>
float addition(float x,float y);
float substraction(float h,float j);
float multliplication(float v,float b);
float divide(float s, float d);
float trigonometry(float d);
void main() 
{
   char  q;
   float  w,r, e,sum,  minus,multi,div;

  
   while(2)
   {
   printf("\n=======:Welcome to the UTILITY APP:=======\n");

   printf("Menu\n 1 : addition: \n\t2 : substraction \n\t3 : multiplication \n\t4 : divide\n\t* : exit\n\tchoose an operation\n");
   scanf("\n%c",&q);
   

   switch(q)
   {
      case '1':
            printf("please enter the two numbers to add:  ");
            scanf("%f%f",&w,&r);
            sum = addition(w,r);
            printf("%.2f",sum);
            break;
      case '2':
            printf("please enter the two numbers to substract:  ");
            scanf("%f%f",&w,&r);
            minus = substraction(w,r);
            printf("%.2f",minus);
            break;
      case '3':
            printf("please enter the two numbers to multiply:  ");
            scanf("%f%f",&w,&r);
            multi= multliplication(w,r);
            printf("%.2f",multi);
            break;
      case '4':
            printf("please enter the two numbers to divide:  ");
            scanf("%f%f",&w,&r);
            div = divide(w,r);
            printf("%.2f",div);
            break; 
      case '*':
            exit(0);
            break;

      default:
            printf("invalid input , please enter a valid input from 1 and 4\n\tthank you:");
            break;   

      



   }
  
   }
   
   
   

}

float addition(float x, float y)
{
   float yk = x+y;
   return yk;
}
float substraction(float h,float j)
{
   float bn = h-j;
   return bn;
}
float multliplication(float v,float b)
{
   float cv = v*b;
   return cv;
}
float divide(float s, float d)
{
   float df = s/d;
   return df;
}


