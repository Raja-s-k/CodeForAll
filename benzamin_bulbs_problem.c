#include<stdio.h>
int fun(int x)
{
    if (x==1)
    return 0;//false
    else 
    return 1;//true
}
int main()
{
    int rounds,bulb,k,n;
    printf("enter the number=");
    scanf("%d",&n);
    int a[n];
    for (bulb=1;bulb<=n;bulb++)
    {
        a[bulb]=0;
    }
    for(rounds=1;rounds<=n;rounds++)
    {
        for(bulb=1;bulb<=n;bulb++)
        {
            for(k=1;k<=n;k++)
            {
                if(bulb==k*rounds)
                {
                    a[bulb]=fun(a[bulb]);    
                }
            }
        }    
    }        
    for(bulb=1;bulb<=n;bulb++)
    {
        if (a[bulb]==1 )
        {
            printf("%4d",bulb);
        }
    }
    return 0;        
}