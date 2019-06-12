// let assume abccba be the largest pallindrome
// => 100000a + 10000b + 1000c + 100c + 10b + a
// => 100001a + 10010b + 1100c
// => 11(9091a + 910b + 100c)  i.e. since pallindrome is divisible by 11(prime), atleast one of the
// '3' digit number must be divisible by 11
#include<bits/stdc++.h>
using namespace std;
bool fun(int n)
{
    vector<int> bin;
    while(n)
    {
        bin.push_back(n%10);
        n/=10;
    }
    int sz = bin.size();
    int i = 0;
    while(i<sz/2)
    {
        if(bin[i]!=bin[sz-1-i])
            break;
        i++;
    }
    return (i==sz/2);
}
int main()
{
    clock_t begin = clock();


    int ans = -1;
    for(int i = 110 ; i <= 999 ;i+=11)
    {
        for(int j = 100 ;j <= 999; j++)
        {
            if(fun(i*j))
                ans = max(ans,i*j);
        }
    }
    cout<<ans<<'\n';


    clock_t end = clock();
    cout<<endl<<"Running time: "<<double(end - begin) / CLOCKS_PER_SEC*1000<<" ms\n";
}