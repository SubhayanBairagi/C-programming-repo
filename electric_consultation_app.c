#include<stdio.h>
#include<math.h>
#include<stdlib.h>
struct cite
{
    float low;
    float high;
    float price;
} mf[10];
int main()
{   
    int p,i,j,x;
    float k,g,h,v,l;
    printf("\n\n\t\t@=============YO MOTHYERFUCKING NIGGA OR WHITE FELLA(I dont care whatever you are)WELCOME TO THIS MOTHERFUCKING CONSULTING APPLICATION==========@\n\n");
    printf("\t\they it is made by subhayan, version 1.2.0, wait for the  new realease you whore\n\n");
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
            printf("\t\tstart again with a valid input you motherfucker");
            exit(0);
        }
    }
    printf("\t\tplease enter the unit that you consumed: ");
    scanf("%f",&k);
    if(k<0)
    {
        printf("\t\tPlease enter a valid input , you son or daughter whatever you are of a bitch");
        exit(0);
    }
    printf("\t\tyour entered citeria was:");
    for(i= 0;i<p;i++)
    {
        printf("\n\t\tlow limit %.2f\t to \thigh limit %.2f\t \tprice per unit at : %.2f\n",mf[i].low,mf[i].high,mf[i].price);
    }
    for(i=0;i<p;i++)
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
        break;
    }
    if(k>0&&k<500)
        printf("\t\tMESSAGE: 'GREEN'\t you done well motherfucker\n");
    else if(k>500&&k<1000)
        printf("\t\tMESSAGE: OK, \tBut wanna save money for prostitues and nature, then reduce consumption of %2.f units immideatly MF!!",k-500);
    else if(k>1000&&k<1500)
        printf("\t\tMESSAGE: YELLOW \t yo bitch listen, you are going to be bankrupt, try to reduce more %.2f units",k-1000);
    else if(k>1500&&k<2000)
        printf("\t\tMESSAGE: RED \t yo! madafaqua listen immediatly reduce the consumption if extra %f fucking units",k-1500);
    else if(k>2000)
        printf("\t\tMESSAGE:  CRITICAL \t reduce the consumption of %.2f units or be prepared to be gangbanged by the bank and the electic compan",k-2000);
    

}