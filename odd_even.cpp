#include <stdio.h>
int main ()
{
	long long int n;
	while(n!=-1)
    {
     scanf("%lld",&n);
	(n&1)?printf(""):printf("%lld\n",n);
    }
	return 0;
}
