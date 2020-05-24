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
    int p,i,j;
    float k,g,h,v,l;
    printf("\n\n\t\t@=============YO MOTHYERFUCKING NIGGA OR WHITE FELLA(I dont care whatever you are)WELCOME TO THIS MOTHERFUCKING CONSULTING APPLICATION==========@\n\n");
    printf("\t\they it is made by subhayan, version 1.0.0, so it is my fucking request to input less than 10 citerias, or wait for some day for new realease whore\n\n");
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
        printf("\n\t\tlow limit %.2f\t   \thigh limit %.2f\t   \tprice per unit: %.2f\n",mf[i].low,mf[i].high,mf[i].price);
    }
    for(i=0;i<p;i++)
    {
        if(k>mf[i].low&&k<mf[i].high)
        {   
            printf("\t\tyou have to pay %.2f for your conumption of %.2f units\n",(k*mf[i].price),k);
            printf("\t\tMESSAGE: 'GREEN'\t(are sala, hebby current save korechis to, ratre alo nibhiye khali sex kora hy naki?)");
        }
        else if(k>mf[i+1].low&&k<mf[i+1].high)
        {
            g = mf[i].high*mf[i].price;
            h = (k-mf[i].high)*mf[i+1].price;
            v= g+h;
            printf("\n\n\t\tyou have to pay %.2f for your conumption of %.2f units\n",v,k);
            printf("\t\tMESSAGE:  'OK,\tbut try to reduce your consumption %.2f units more,motherfucker",(k-mf[i].high));
        }
        else if(k>mf[i+2].low&&k<mf[i+2].high)
        {
            
            printf("\n\n\t\tyou have to pay %.2f for your conumption of %.2f units\n",(mf[i+1].high*mf[i+1].price)+((k-mf[i+2].low)*mf[i+2].price),k);
            printf("\t\tMESSAGE:  yellow'\t yo bitch listen, you are going to be bankrupt, try to reduce more %.2f units",(k-mf[i+2].low) );
        }
        else if(k>mf[i+3].low&&k<mf[i+3].high)
        {
            printf("\n\n\t\tyou have to pay %.2f for your conumption of %.2f units\n",(mf[i+2].high*mf[i+2].price)+((k-mf[i+3].low)*mf[i+3].price),k);
            printf("\t\tMESSAGE: RED\t yo! madafaqua listen immediatly reduce the consumption if extra %f fucking units",(k-mf[i+3].low));
        }
        else if(k>mf[i+4].low&&k<mf[i+4].high)
        {
           printf("\n\n\t\tyou have to pay %.2f for your conumption of %.2f units\n",(mf[i+3].high*mf[i+3].price)+((k-mf[i+4].low)*mf[i+4].price),k);
           printf("\t\tMESSAGE:  CRITICAL\t reduce the consumption of %.2f units or be prepared to be gangbanged by bank and the electic company ",(k-mf[i+4].low)); 
        }
        else if(k>mf[i+5].low&&k<mf[i+5].high)
        {
           printf("\n\n\t\tyou have to pay %.2f for your conumption of %.2f units\n",(mf[i+4].high*mf[i+4].price)+((k-mf[i+5].low)*mf[i+5].price),k);
           printf("\t\tMESSAGE: CRITICAL\t reduce the consumption of %.2f units or be prepared to be gangbanged by bank and the electic company ",(k-mf[i+5].low)); 
        }
        else if(k>mf[i+6].low&&k<mf[i+6].high)
        {
           printf("\n\n\t\tyou have to pay %.2f for your conumption of %.2f units\n",(mf[i+5].high*mf[i+5].price)+((k-mf[i+6].low)*mf[i+6].price),k);
           printf("\t\tMESSAGE: CRITICAL\t reduce the consumption of %.2f units or be prepared to be gangbanged by bank and the electic company ",(k-mf[i+6].low)); 
        }
        else if(k>mf[i+7].low&&k<mf[i+7].high)
        {
           printf("\n\n\t\tyou have to pay %.2f for your conumption of %.2f units\n",(mf[i+6].high*mf[i+6].price)+((k-mf[i+7].low)*mf[i+7].price),k);
           printf("\t\tMESSAGE: CRITICAL\t reduce the consumption of %.2f units or be prepared to be gangbanged by bank and the electic company ",(k-mf[i+7].low)); 
        }
        else if(k>mf[i+8].low&&k<mf[i+8].high)
        {
           printf("\n\n\t\tyou have to pay %.2f for your conumption of %.2f units\n",(mf[i+7].high*mf[i+7].price)+((k-mf[i+8].low)*mf[i+8].price),k);
           printf("\t\tMESSAGE: CRITICAL\t reduce the consumption of %.2f units or be prepared to be gangbanged by bank and the electic company ",(k-mf[i+8].low)); 
        }
        else if(k>mf[i+9].low&&k<mf[i+9].high)
        {
           printf("\n\n\t\tyou have to pay %.2f for your conumption of %.2f units\n",(mf[i+8].high*mf[i+8].price)+((k-mf[i+9].low)*mf[i+9].price),k);
           printf("\t\tMESSAGE: CRITICAL\t reduce the consumption of %.2f units or be prepared to be gangbanged by bank and the electic company ",(k-mf[i+9].low)); 
        }
        else if(k>mf[i+10].low&&k<mf[i+10].high)
        {  
           printf("\n\n\t\tyou have to pay %.2f for your conumption of %.2f units\n",(mf[i+9].high*mf[i+9].price)+((k-mf[i+10].low)*mf[i+10].price),k);
           printf("\t\tMESSAGE: CRITICAL\t reduce the consumption of %.2f units or be prepared to be gangbanged by bank and the electic company ",(k-mf[i+10].low)); 
        }
        break;
        
    }
    


}