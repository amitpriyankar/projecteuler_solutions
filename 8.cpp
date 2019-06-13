// a simple brute force solution
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k; // n is lenth of string and k is no. of consecutive digits
    cin >> n >> k;
    string s = "";
    int f = 20; // input string is in 20 lines
    while (f--)
    {
        string t;
        cin >> t;
        s = s + t;
    }
    cout << s << endl;
    long long ans = 0;
    for (int i = 0; i + k - 1 < n; i++)
    {
        long long cur = 1;
        for (int j = 0; j < k; j++)
        {
            cur *= 1LL * (s[i + j] - '0');
        }
        ans = max(ans, cur);
    }
    cout << ans << '\n';
}