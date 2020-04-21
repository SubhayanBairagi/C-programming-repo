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
float temp (float x);
float height (float x);
float length (float x);
float tim (float x);
int dectobin (int n);
int bintodec(int n);

int main()
{
    char q;
    int t,s,f,l,i,j,o,n,temp2,arr[100];
    float  w,r,z,m, e,sum, minus,multi,div;
    while(2)
    {
    printf("\n\n\t\t@===============:::::WELCOME TO THE UTILITY APP:::::==================@\n\n\t\t");
    printf("\n\n\t\t-----By: Subhayan.-----\n\n\t\t");
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
                                printf("the sin value of %f is %f\n",w,z);
                            break;
                            case 2:
                                printf("Enter the value: \n");
                                scanf("%f",&w);
                                z = cos(w);
                                printf("the cos value of %f is %f\n",w,z);
                            break;
                            case 3:
                                printf("Enter the value: \n");
                                scanf("%f",&w);
                                z = tan(w);
                                printf("the tan value of %f is %f\n",w,z);
                            break;
                            case 4:
                                printf("Enter the value: \n");
                                scanf("%f",&w);
                                z = 1/tan(w);
                                printf("the cot value of %f is %f\n",w,z);
                            break;
                            case 5:
                                printf("Enter the value: \n");
                                scanf("%f",&w);
                                z = 1/cos(w);
                                printf("the sec value of %f is %f\n",w,z);
                            break;
                            case 6:
                                printf("Enter the value: \n");
                                scanf("%f",&w);
                                z = 1/sin(w);
                                printf("the cosec value of %f is %f\n",w,z);
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
                                    printf("the sin^-1 value of %f is %f\n",w,z);
                                    
                                    break;
                                case 2:
                                    printf("Enter the value: \n");
                                    scanf("%f",&w);
                                    z = acos(w);
                                    printf("the cos^-1 value of %f is %f\n",w,z);
                                    
                                    break;
                                case 3:
                                    printf("Enter the value: \n");
                                    scanf("%f",&w);
                                    z = atan(w);
                                    printf("the tan^-1 value of %f is %f\n",w,z);
                                    
                                    break;
                                case 4:
                                    printf("Enter the value: \n");
                                    scanf("%f",&w);
                                    z = 1/atan(w);
                                    printf("the cot^-1 value of %f is %f\n",w,z);
                                    
                                    break;
                                case 5:
                                    printf("Enter the value: \n");
                                    scanf("%f",&w);
                                    z = 1/acos(w);
                                    printf("the sec^-1 value of %f is %f\n",w,z);
                                    
                                    break;
                                case 6:
                                    printf("Enter the value: \n");
                                    scanf("%f",&w);
                                    z = 1/asin(w);
                                    printf("the cosec^-1 value of %f is %f\n",w,z);
                                    
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

            case 'd':
                        while(3)
                        {
                        printf("Enter\n\t1: convert fahrenheit to celsius\n\t2: convert cm to ft.\n\t3: convert km to mile\n\t4: min to hour\n\t");
                        printf ("press 5 to exit\n\t");
                        scanf ("%d", &s);

                        switch (s)
                            {
                            case 1:
                            printf ("please enter the value in fahrenheit:");
                            scanf ("%f", &w);
                            z = temp (w);
                            printf ("the value in celsius is: %.2f degree celsius\n\t", z);
                            break;
                            case 2:
                            printf ("please enter the height in cm:\n\t");
                            scanf ("%f", &w);
                            z = height (w); 
                            printf ("the height is ft is: %.2f\n\t", z);
                            break;
                            case 3:
                            printf ("please enter the length is KM: \n\t ");
                            scanf ("%f", &w);
                            z = length (w);
                            printf ("The length in mile: %.2f\n\t", z);
                            break;
                            case 4:
                            printf ("please enter the minutes: \n\t");
                            scanf ("%f", &w);
                            z = tim (w);
                            printf ("it is %.2f hours\n\t", z);
                            break;
                            case 5:
                            exit (0);
                            break;
                            default:
                            printf ("please enter a valid input\n\t");
                            break;

                            }
                        }
                    break;
                    case 'e':
                         while(2)
                        {
                        printf("Enter\n\t1: BINARY TO DECIMAL\n\t2: DECIMAL TO BINARY\n\t3: BINARY TO OCTAL\n\t4: OCTAL TO BINARY\n\t5: DECIMAL TO HEXADECIMAL\n\t6: HEXADECIMAL TO DECIMAL\n\t");
                        printf("7: HEXADECIMAL TO BINARY\n\t8: BINARY TO HEXADECIMAL\n\t9: OCTAL TO DECIMAL\n\t10. DECIMAL TO OCTAL\n\t11: OCTAL TO HEXADECIMAL\n\t12: to exit\n\t");
                        scanf("\n%d",&s);

                        switch(s)
                        {
                            case 1: 
                                printf("Enter a binary number: ");
                                scanf("%d", &n);
                                l = bintodec( n);
                                printf("the decimal equivalent number is: %d\n\t",l);
                            break;

                            case 2:
                                    printf("Enter a decimal number: ");
                                    scanf("%d", &n);
                                    l = bintodec( n);
                                    printf("The binary equivalent number is: %d\n\t",l);
                                    
                            break;

                            case 3: 
                                    printf("Enter the binary number: \n\t");
                                    scanf("%d",&n);
                                    l = bintodec(n);
                                    printf("the octal equivalent number is : %o\n\t",l);


                            break;

                            case 4:
                                    printf("Enter the octal number: \n\t");
                                    scanf("%o",&n);
                                    l = dectobin(n);
                                    printf("The binary equivalent number is: %d\n\t",l);
                                
                            break;

                            case 5:
                                    printf("Enter the decimal number: \n\t");
                                    scanf("%d",&n);
                                    printf("The hexadecimal equivalent number is: %x\n\t",n);
                                

                            break;

                            case 6:
                                    printf("Enter the hexadecimal number(words are in lowercase): \n\t");
                                    scanf("%x",&n);
                                    printf("the decimal equivalent number is : %d\n\t",n);


                            break;

                            case 7:
                                printf("Enter the hexadecimal number: \n\t");
                                    scanf("%x",&n);
                                    l = dectobin(n);
                                    printf("the binary equivalent number is : %d\n\t",l);


                            break;

                            case 8:
                            printf("Enter the binary number: \n\t");
                                    scanf("%d",&n);
                                    l = bintodec(n);
                                    printf("the hexadecimal equivalent number is : %d\n\t",l);


                            break;

                            case 9:
                                    printf("Enter the octal number: \n\t");
                                    scanf("%d",&n);
                                    printf("the decimal equivalent number is : %d\n\t",n);

                            break;

                            case 10:
                                    printf("Enter the decimal number: \n\t");
                                    scanf("%d",&n);
                                    printf("the octal equivalent number is : %o\n\t",n);


                            break;

                            case 11:
                            printf("Enter the octal number: \n\t");
                                    scanf("%o",&n);
                                    printf("the hexadecimal equivalent number is : %x\n\t",n);


                            break;

                            case 12:
                                exit(0);

                            break;



                        }
                        }


                    break;

                    case 'f':

                    break;
                    
                    case 'g':
                            while(2)
                            {
                            printf("Enter\n\t1: exponential\n\t2: root\n\t3: mod calulator\n\t4: HCD and LCM\n\t5: factorial generator\n\t6: to exit\n\t");
                            scanf("%d",&t);

                            switch(t)
                            {
                                case 1:
                                    printf("enter the number and the power: \n\t");
                                    scanf("%f%f",&w,&r);
                                    m = pow(w,r);
                                    printf("%f\n\t",m);
                                break;
                                case 2: 
                                    printf("enter the number:\n\t");
                                    scanf("%f",&w);
                                    m = sqrt(w);
                                    printf("%f\n\t",m);
                                break;
                                case 3:
                                    printf("Enter the number: \n\t");
                                    scanf("%f",&w);
                                    if(w<0)
                                        printf("the modified number is: %f\n\t",w*-1);
                                    else
                                        printf("the is allready a positive entity: %f\n\t",w);
                                break;
                                case 4: 
                                    printf("please enter two numbers: \n\t");
                                        scanf("%d%d",&i,&j);
                                        o =i;
                                        n =j;
                                        while(n!=0)
                                        {
                                            temp2 = n;
                                            n = o%n;
                                            o = temp2;
                                        }
                                        l = (i*j)/o;
                                        printf("the HCF and LCM is: %d,%d\n\t",o,l);
                                break;
                                case 5:
                                    printf("Enter the number: \n\t");
                                    scanf("%d",&l);
                                    o =1;
                                for (i = 1; i <= l; ++i) {
                                    o *= i;
                                    }
                                    printf("Factorial of %d = %llu\n\t", l,o);
                                break;
                                case 6:
                                    exit(0);
                                break;
                                default:
                                    printf("please enter a valid option\n\t");
                                break;
                            }
                                    
                            }    
                        case '*':
                            exit(0);
                        break;

                        default:
                            printf("please enter a valid option and try again: \n\t");
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

float temp (float x)
{
    float b;
    b = (5.0/9.0)*(x-32);
    return b;
}
float height (float x)
{
    float b;
    b = x/30.48;
    return b;
}
float length (float x)
{
    float b;
    b = x/1.609;
    return b;
}
float tim (float x)
{
    float b;
    b = x/60;
    return b;
}
int bintodec(int n)
{   int rem = 0,def = 0,i = 0;
    while(n!=0)
    {
        rem = n%10;
        def = def+rem*pow(2,i);
        n = n/10;
        i++;
    }
   return def;
}
int dectobin (int n)
{
     int rem = 0,def = 0,i=1;
     while(n!=0)
     {
        rem = n%2;
        def = def+rem*i;
        n = n/2;
        i = i*10;
     }
    return def;
     
    
}
