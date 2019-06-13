// try to reduce a relation that can lead to O(n) time complexity
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n = 1000;
    int ans = 0;
    for(int a = 1; a <= n/3; a++)
    {
        int b = (n*n-2*n*a)/(2*n-2*a);
        int c = n - a - b;
        if(a*a + b*b == c*c)
            {
                ans = a*b*c;
                cout<<a<<" "<<b<<" "<<c<<'\n';
                break;
            }
    }
    cout<<ans<<endl;
}