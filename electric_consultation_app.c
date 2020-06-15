#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>
struct cite
{
    float low;
    float high;
    float price;
} mf[10];
int main()
{   
    int p,i,j,x;
    float k,g,val,v,l;
    char sub[200];
    printf("please enter your name: ");
    gets(sub);
    printf("\n\n\t\t@=============Hey %s WELCOME to this ELECTRIC_CONSULTATION_APP==========@\n\n",sub);
    printf("\t\they it is made by subhayan, version 1.2.0, wait for the  new realease \n\n");
    printf("\n\t\tinput the number of citerias : ");
    scanf("\t%d",&p);
    for(i=0;i<p;i++)
    {
        printf("\t\tenter the low limit,high limit and the prie per unit of the citeria %d:  ",i+1);
        scanf("%f%f%f",&mf[i].low,&mf[i].high,&mf[i].price);
    }
    for(i=0;i<p;i++)
    {
        if(mf[i].high<mf[i+1].low||mf[i+1].low>(mf[i].high+2))
        {
            printf("\t\tstart again with a valid input");
            exit(0);
        }
    }
    printf("\t\tplease enter the unit that you consumed: ");
    scanf("%f",&k);
    if(k<0)
    {
        printf("\t\tPlease enter a valid input");
        exit(0);
    }
    printf("\t\tyour entered citeria was:");
    for(i= 0;i<p;i++)
    {
        printf("\n\t\tlow limit %.2f\t to \thigh limit %.2f\t \tprice per unit at : %.2f\n",mf[i].low,mf[i].high,mf[i].price);
    }
    /*for(i=0;i<p;i++)
    {
        for(j=0;j<p-i;j++)
        {
            if(k>mf[i+j].low&&k<mf[i+j].high)
        {
           for(x=0;x<(i+j);x++){
               l += ((mf[x].high-mf[x].low)*mf[x].price);
           }
           v=((k-mf[i+j].low)*mf[i+j].price);
            printf("\n\n\t\tyou have to pay %.2f for your conumption of %.2f units\n",v+l,k);
        }
        }
    }*/
    val = k;
    for(i=p-1;i>=0;i--)
    {
        if(k==0)
            break;
        l+=(k-mf[i].low)*mf[i].price;
        k = mf[i].low;
    }
    printf("\n\n\t\tyou have to pay %.2f for your conumption of %.2f units\n",l,val);
    if(k>0&&k<500)
        printf("\t\tMESSAGE: 'GREEN'\t you done well\n");
    else if(k>500&&k<1000)
        printf("\t\tMESSAGE: OK, \tBUT reduce consumption of %2.f units",k-500);
    else if(k>1000&&k<1500)
        printf("\t\tMESSAGE: YELLOW \ttry to reduce more %.2f units",k-1000);
    else if(k>1500&&k<2000)
        printf("\t\tMESSAGE: RED \t immediatly reduce the consumption if extra %.2f units",k-1500);
    else if(k>2000)
        printf("\t\tMESSAGE:  CRITICAL \t reduce the consumption of %.2f units ",k-2000);
    }