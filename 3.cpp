#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long const N = 600851475143;
    long long n = N;
    long long res = 1;
    while(res*res <= N)
        res++;
    res--;
    int t = 2;
    int ans = -1;
    while(t<=res)
    {
        while(n%t==0)
        {
            ans = t;
            n/=t;
        }
        t++;
    }
    cout<<ans<<endl;
}