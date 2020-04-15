#include<stdio.h>
#include<stdlib.h>
#include<math.h>
float addition(float x,float y);
float substraction(float h,float j);
float multliplication(float v,float b);
float divide(float s, float d);
float trigonometry(float d);
int main()
{
    char q;
    int t,s,f;
    float  w,r,z, e,sum,  minus,multi,div;
    while(2)
    {
    printf("Enter the charecter to proceed:\n\ta: Aritmatic operation\n\tb: Trigonometric operation\n\tc: Area, volume, interest,and leap year calculator:\n\t" );
    printf("d: Physical quantity converter:\n\te: number  system converter:\n\tf:NUmber generetor, list sorting and finding calculation:\n\t");
    printf("g: Complex Arithmatic Operations\n\t");
    printf("press * to exit\n\t");
    scanf("\n%c",&q);
    
    
        switch (q)
        {
            case 'a':
                printf("press\n\t1: to add\n\t2: substract\n\t3: multiplication\n\t4: divide\n\t5 to exit\n\t");
                scanf("\n%d",&t);
                
                switch(t)
                {
                    case 1:
                        printf("please enter the two numbers to add:  ");
                        scanf("%f%f",&w,&r);
                        sum = addition(w,r);
                        printf("%.2f\n\n",sum);
                        break;
                    case 2:
                            printf("please enter the two numbers to substract:  ");
                            scanf("%f%f",&w,&r);
                            minus = substraction(w,r);
                            printf("%.2f\n\n",minus);
                            break;
                    case 3:
                            printf("please enter the two numbers to multiply:  ");
                            scanf("%f%f",&w,&r);
                            multi= multliplication(w,r);
                            printf("%.2f\n\n",multi);
                            break;
                    case 4:
                            printf("please enter the two numbers to divide:  ");
                            scanf("%f%f",&w,&r);
                            div = divide(w,r);
                            printf("%.2f\n\n",div);
                            break; 
                    case 5:
                            exit(0);
                            break;

                    default:
                            printf("invalid input , please enter a valid input from 1 and 4\n\tthank you:");
                            break; 
                }

            break;

            case 'b':
                printf("Enter the number:\n\t1: for normal trigonometric functions\n\t2: for inverse trigonometric functions\n\t");
                scanf("\n%d",&s);

                switch(s)
                {
                    case 1:

                        printf("Enter\n\t1: to sin\n\t2: cos\n\t3: tan\n\t4: cot\n\t5: sec\n\t6: cosec\n\t");
                        printf("Enter 7 to exit\n\t");
                        scanf("\n%d",&f);
                        switch(f)
                        {
                            case 1:
                                printf("Enter the value: \n");
                                scanf("%f",&w);
                                z = sin(w);
                                printf("the sin value of %f is %f",w,z);
                            break;
                            case 2:
                                printf("Enter the value: \n");
                                scanf("%f",&w);
                                z = cos(w);
                                printf("the cos value of %f is %f",w,z);
                            break;
                            case 3:
                                printf("Enter the value: \n");
                                scanf("%f",&w);
                                z = tan(w);
                                printf("the tan value of %f is %f",w,z);
                            break;
                            case 4:
                                printf("Enter the value: \n");
                                scanf("%f",&w);
                                z = 1/tan(w);
                                printf("the cot value of %f is %f",w,z);
                            break;
                            case 5:
                                printf("Enter the value: \n");
                                scanf("%f",&w);
                                z = 1/cos(w);
                                printf("the sec value of %f is %f",w,z);
                            break;
                            case 6:
                                printf("Enter the value: \n");
                                scanf("%f",&w);
                                z = 1/sin(w);
                                printf("the cosec value of %f is %f",w,z);
                            break;
                            case 7:
                                exit(0);
                            break;
                            default:
                                printf("invalid input\n\t");
                            break;

                        }
                     break;
                     case 2:
                            printf("Enter\n\t1: to sin^-1\n\t2: cos^-1\n\t3: tan^-1\n\t4: cot^-1\n\t5: sec6-1\n\t6: cosec^-1\n\t");
                            printf("Enter 7 to exit\n\t");
                            scanf("\n%d",&f);
                            switch(f)
                            {
                                case 1:
                                    printf("Enter the value: \n");
                                    scanf("%f",&w);
                                    z = asin(w);
                                    printf("the sin^-1 value of %f is %f",w,z);
                                    
                                    break;
                                case 2:
                                    printf("Enter the value: \n");
                                    scanf("%f",&w);
                                    z = acos(w);
                                    printf("the cos^-1 value of %f is %f",w,z);
                                    
                                    break;
                                case 3:
                                    printf("Enter the value: \n");
                                    scanf("%f",&w);
                                    z = atan(w);
                                    printf("the tan^-1 value of %f is %f",w,z);
                                    
                                    break;
                                case 4:
                                    printf("Enter the value: \n");
                                    scanf("%f",&w);
                                    z = 1/atan(w);
                                    printf("the cot^-1 value of %f is %f",w,z);
                                    
                                    break;
                                case 5:
                                    printf("Enter the value: \n");
                                    scanf("%f",&w);
                                    z = 1/acos(w);
                                    printf("the sec^-1 value of %f is %f",w,z);
                                    
                                    break;
                                case 6:
                                    printf("Enter the value: \n");
                                    scanf("%f",&w);
                                    z = 1/asin(w);
                                    printf("the cosec^-1 value of %f is %f",w,z);
                                    
                                    break;
                                case 7:
                                    exit(0);
                                    break;
                                default:
                                    printf("invalid input\n\t");
                                    break;
                            }
                         break;   
                    default:
                    printf("please enter a valid input\n\t");
                    break;
                }
            break;

            case 'c':
                
                
                    
        }
    
    }
    return 0;
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


