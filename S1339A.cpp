#include <bits/stdc++.h>
#include <string.h>

using namespace std;
#define max 10000

void solve()
{
    /** write your solution here **/

    string s;

    int c[3];

    int u = 0;

    for (int i = 0; i < 3; i++)
    {
        c[i] = 0;
    }

    cin >> s;

    for (int i = 0; s[i] != '\0'; i++)
    {
        if ('1' <= s[i] && s[i] <= '3')
        {
            c[s[i] - '1']++;
        }
    }

    for (int w = 0; w < 3; w++)
    {
        while (c[w] != 0)
        {
            s[u] = (char(w + 1) + '0');
            c[w]--;
            u = u + 2;
        }
    }
    cout << s << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}