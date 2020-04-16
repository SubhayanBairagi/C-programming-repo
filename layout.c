#include<stdio.h>
#include<stdlib.h>
#include<math.h>
float addition(float x,float y);
float substraction(float h,float j);
float multliplication(float v,float b);
float divide(float s, float d);
float compound(float c,float d,float f);
float circlearea(float d);
float rectanglearea(float w, float r);
float squarearea(float w);
float cubevol(float w);
float spherevol(float w);
float cylindervol(float w,float r);
float leapyear(int f);
int main()
{
    char q;
    int t,s,f,l;
    float  w,r,z,m, e,sum,  minus,multi,div;
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
                 while(2)
                {
                    printf("Enter\n\t1: simple interest\n\t2: compound interest\n\t3: circle area\n\t4: rectangle area\n\t5: square area\n\t");
                    printf("6: CUBE VOLUME CALCULATOR\n\t7: SPHERE VOLUME CALCULATOR\n\t8: CYLINDER VOLUME CALCULATOR\n\t9: leap year calculator\n\t");
                    printf("press 10 to exit\n\t");
                    scanf("\n%d",&s);
                    
                    switch(s)
                    {
                        case 1:
                            printf("enter the prinipal amount,rate of the interest and the time:\n");
                            scanf("%f%f%f",&w,&r,&z);
                            e = (w*r*z)/100.00;
                            printf("the simple interest is: %.2f\n\t",e);
                        break;
                        
                        case 2:
                            printf("Enter initial principal balance, interest rate, number of time periods elapsed\n\t");
                            scanf("%f%f%f",&r,&z,&e);
                            m = compound(r,z,e);
                            printf("the ccompound interest is:  %.2f\n\t",m);
                        break;
                        
                        case 3:
                            printf("please enter the radius of the circle in cm:\n\t");
                            scanf("%f",&w);
                            r = circlearea(w);
                            printf("the area of the circle is %.2f in cm^2\n\t",r);
                        break;
                        
                        case 4:
                            printf("Enter\n\t1: legth\n\t2: width");
                            scanf("%f%f",&w,&r);
                            e = rectanglearea(w,r);
                            printf("the area of the rectangle is %.2f cm^2\n\t",e);
                        break;
                        
                        case 5:
                            printf("Enter\n\tthe value of the side in cm:\n\t");
                            scanf("%f",&w);
                            e = squarearea(w);
                            printf("the area of the square is %.2f cm^2\n\t",e);
                        break;
                        
                        case 6:
                            printf("enter the value of the side in cm\n\t");
                            scanf("%f",&w);
                            e = cubevol(w);
                            printf("the volume of the cube is %.2f cm^3",e);
                        break;
                        
                        case 7:
                            printf("enter the value of the radius,in cm\n\t");
                            scanf("%f",&w);
                            e = spherevol(w);
                            printf("the volume of the sphere is %.2f cm^3",e);
                        break;
                        
                        case 8:
                            printf("enter the value of the height and the radius in cm\n\t");
                            scanf("%f%f",&w,&r);
                            e = cylindervol(w,r);
                            printf("the volume of the cylinder is  %.2f cm^3 ",e);
                        break;
                        case 9:
                            printf("enter the year:\n\t");
                            scanf("%d",&l);
                            e = leapyear(l);
                            return e;
                        break;
                        case 10:
                            exit(0);
                            break;
                        
                        default:
                            printf("please enter valid option");
                            break;
                    }    
                        
                        
                            
                        
                }
            break;

            
                
                
                    
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
float compound(float c,float d,float f)
{
    float k;
    
    k = c*(pow((1-d/100),f));
    
    return k;
}
float circlearea(float d)
{
    float f;
    f = 3.14*d*d;
    return f;
}
float rectanglearea(float w,float r)
{
    float f;
    f = w*r;
    return f;
}
float squarearea(float w)
{
    float f;
    f = w*w;
    return f;
}
float cubevol(float w)
{
    float f;
    f = w*w*w;
    return f;
}
float spherevol(float w)
{
    float f;
    f = 1.33*3.14*w*w*w;
    return f;
}
float cylindervol(float w,float r)
{
    float f;
    f = 3.14*r*r*w;
    return f;
}
float leapyear(int f)
{
  if(f%4==0&&f%100!=0)
    printf("this is a leap year\n\t");
  else if(f%400==0)
    printf("this is a leap year\n\t");
  else
    printf("this is not a leap year\n\t");
}


