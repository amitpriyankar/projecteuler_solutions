// (1^2 + 2^2 + 3^2 + ... + n^2) = n*(n+1)*(2n+1)/6;
// (1 + 2 + 3 ... n) = n*(n+1)/2;
// (n(n+1)/2)^2 - n(n+1)(2n+1)/6 = n(n-1)(n+1)(3n+2)/12;
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n = 100;
    cout<<(n * (n-1) * (n+1) * (3*n + 2))/12<<'\n';
}