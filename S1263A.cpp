#include <bits/stdc++.h>
#include <string.h>

using namespace std;

#define max 10000

void solve()
{
    /** write your solution here **/
    int A[5][5];
    int x, y;
    int counter = 0;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {

            cin >> A[i][j];

            if (A[i][j] == 1)
            {
                x = i;
                y = j;
            }
        }
    }

    counter = counter + abs(2 - x) + abs(2 - y);
    cout << counter << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}