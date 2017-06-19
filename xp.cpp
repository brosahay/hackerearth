#include <stdio.h>
#include <stdlib.h>
#include <math.h>

using namespace std;

int prime[1000000]={0};

int chkprime(int i)
{
    if(i==1||i==0)
        return -1;
    for(int j=2;j<=sqrt(i);j++)
    {
        if(i%j==0)
            return -1;
    }
    return 1;
}

int main()
{
    int t;
    int c,i;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&c);
        for(i=0;c!=0;i++)
        {
            if(prime[i]==0)
            {
                prime[i]=chkprime(i);
            }
            if(prime[i]==1)
            {
                printf("%d ",i);
                c--;
            }
        }
    }
    return 0;
}
