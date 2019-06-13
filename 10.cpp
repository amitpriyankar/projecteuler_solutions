#include<bits/stdc++.h>
using namespace std;
int main()
{
    int const N = 1000009;
    bool prime[N+1];
    memset(prime,1,sizeof(prime));
    prime[0]=prime[1]=0;
    for(int i=2; i*i<=N; i++)
    {
        if(prime[i])
        {
            for(int j=i*i; j<=N; j++)
                prime[j]=0;
        }
    }
    vector<int> bin;
    for(int i=2; i<=N; i++)
    {
        if(prime[i])bin.push_back(i);
    }
    int sz = bin.size();
    long long sum[sz];
    memset(sum,0,sizeof(sum));
    sum[0]=bin[0];
    for(int i=1; i<bin.size(); i++)
        sum[i]=(long long)bin[i]+sum[i-1];
    int T;
    cin>>T;
    while(T--)
    {
        int n;
        cin>>n;
        long long ans=0;
        int id = lower_bound(bin.begin(),bin.end(),n)-bin.begin();
        if(bin[id]!=n)id--;
        if(id!=-1)ans=sum[id];
        cout<<ans<<'\n';
    }
}