#include <stdio.h>
#include <string.h>
#include <math.h>

using namespace std;

char prime[]={'2','3','5','7'};

int main()
{
    long long t;
    scanf("%lld",&t);
    while(t--)
    {
        char str[18]={0};
        scanf("%s",str);
        int c=0;
        int len=(int)strlen(str);
        int i=0,j;
        //puts(str);
        while(i<len)
        {
            //printf("i=%d",i);
            if(str[i]=='2'||str[i]=='3'||str[i]=='5'||str[i]=='7')
            {
                c+=pow(10,len-1-i);
                //puts("CHECK1");
            }
            //puts("CHECK2");
            if(str[i]=='1')
            {
                //puts("CHECK3");
                str[i++]=0;
                j=len-1;
                while(i<j)
                {
                    if(str[j]=='0')
                    str[j]='9';
                    else
                        str[j]--;
                    j--;
                }
                //puts(str);
            }
            else
                str[i]--;
            //printf("char:%c\n",str[i]);
        }
        //printf("%d\n",len);
        //puts(str);
        printf("%d\n",c);
    }
    return 0;
}
