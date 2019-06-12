#include<bits/stdc++.h>
using namespace std;
int main()
{
    int const limit = 4000000;
    int a = 1, b = 2;
    int sum = 2;
    while(a + b < limit)
    {
        int t = a + b;
        if(!(t&1))
            sum += t;
        a = b;
        b = t;
    }

    cout<<sum<<'\n';
}