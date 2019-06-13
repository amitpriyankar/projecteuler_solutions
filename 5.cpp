//we need to choose least common multiple of (1,2,3, ..., 20) numbers
// lcm(1,2,3,...k) = lcm(1,2,3 ... ,k-1)*k / gcd ( lcm(1,2,3 ... k-1),k)
#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long lcm = 1;
   for(long long i=2; i<=20; i++)
   {
       lcm = (i*lcm)/(__gcd(i,lcm));
   }
   cout<<lcm<<endl;
}