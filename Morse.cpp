#include<bits/stdc++.h>
using namespace std;

long long int family(long long int k,long long int s)
{
    if(k==0)
    {
        if(s%2==0)
            return 0;
        else
            return 1;
    }
    if(k%2==0)
        return family(k/2,s);
    else
        return family(k/2,s+1);
}

int main()
{
    int t;
    long long int n,k,x,s;
    scanf("%d",&t);
    while(t--)
    {
        s = 0;
        scanf("%lld %lld",&n,&k);
        k--;
        x = family(k,s);
        if(x==0)
            printf("Male\n");
        else
            printf("Female\n");
    }
    return 0;    
}
