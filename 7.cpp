// nlnn+n(lnlnn-1) < nth prime < nlnn+nlnlnn
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int const N = 200000;
    bool prime[N+1];
    memset(prime,1,sizeof(prime));
    prime[1]=0;
    int dp[N+1],ct=1;
    for(int i=2; i*i<=N; i++)
    {
        if(prime[i])
        {
            for(int j=i*i; j<=N; j+=i)
                prime[j]=0;
        }
    }
    for(int i=2; i<=N; i++)
    {
      if(ct>10005)break;
      if(prime[i])dp[ct++]=i;
    }
    cout<<dp[10001]<<endl;
}