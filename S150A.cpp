#include <bits/stdc++.h>
#include <string.h>

using namespace std;

#define max 10000

void solve()
{
    /** write your solution here **/

    int m, n;

    cin >> m;
    cin >> n;

    if (m % 2 == 0 || n % 2 == 0)
    {
        cout << ((m * n) / 2);
    }
    else
        cout << ((m * n - 1) / 2);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}