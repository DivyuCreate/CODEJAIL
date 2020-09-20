#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t = 0;
    cin >> t;
    while (t--)
    {
        int n = 0;
        cin >> n;
        vector<int> coins;
        int temp = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> temp;
            coins.push_back(temp);
        }
        sort(coins.begin(), coins.end());
        int m = 100000000;
        for (int i = 0; i < n - 1; i++)
        {
            if (abs(coins[i] - coins[i + 1]) < m)
                m = abs(coins[i] - coins[i + 1]);
        }
        cout << m << "\n";
    }
}