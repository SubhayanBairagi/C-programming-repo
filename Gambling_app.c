#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    char get[100],ch;
    int i,k,j,arr[100],n,sum;
    for(j=0;j<6;j++)
    {
        for(k=0;k<26;k++)
        {
            printf("'|'*");
        }
        printf("\n");
    }
    printf("\t\n\tHi there, welcome to this gambling app,it is made by Subhayan Bairagi\n\tPlease enter your name: ");
    gets(get);
    printf("\tHello %s,",get);
    while(2){
    do{
        printf("\n\tplease enter 2 to continue or to exit press 1: ");
        scanf("\t%d",&n);
        if(n>2||n<1){
            printf("\tOOPS,you have entered a wrong input");}
    }while(n>2||n<1);
    if(n==2)
    {
        srand(time(0));
         for(j=0;j<2;j++)
    {
        for(k=0;k<35;k++)
        {
            printf("<^>");
        }
        printf("\n");
    }
        printf("\tYOUR LUCKY RANDOM NUMBERS ARE: \n");
    for(i=0;i<3;i++)
    {
       arr[i] = (rand()%10);
        printf("\tNo.%d is : [%d]\n",(i+1),arr[i]);
    }
    if(arr[0]==arr[1]==arr[2]){
        printf("\tCONGRATULATION,you won\n");
    for(j=0;j<1;j++)
    {
        for(k=0;k<35;k++)
        {
            printf("<^>");
        }
        printf("\n");
    }
    }
    else if(arr[0]==arr[1]||arr[1]==arr[2]||arr[0]==arr[2]){
        printf("\tWOW,You Did Well,Better luck next time\n");
    for(j=0;j<1;j++)
    {
        for(k=0;k<35;k++)
        {
            printf("<^>");
        }
        printf("\n");
    }
    }
    else{
        printf("\tOOPS,YOU LOOSE, SEE YOU AGAIN %s\n",get);
    for(j=0;j<1;j++)
    {
        for(k=0;k<35;k++)
        {
            printf("<^>");
        }
        printf("\n");
    }
    }
    }
    else
    {
        printf("\tGood bye, See you again....\n");
           for(j=0;j<2;j++)
    {
        for(k=0;k<35;k++)
        {
            printf("~*~");
        }
        printf("\n");
    }
        exit(0);
    }
    }
    
}
