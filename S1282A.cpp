#include <bits/stdc++.h>
#include <string.h>

using namespace std;

#define max 10000

void solve()
{

    /** write your solution here **/

    int x = 0;
    int n;
    string f;
    cin >> n;

    for (int i = 0; i < n; i++)
    {

        cin >> f;
        if ((f == "X++") || (f == "++X"))
            x += 1;
        else
            x -= 1;
    }

    cout << x << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}