#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t = 0;
    cin >> t;
    while (t--)
    {
        int n = 0;
        cin >> n;
        int c = 0; //counting the number of squares
        while (n >= 1)
        {
            int s = sqrt(n);
            s = s * s;
            n = n - s; //left circles
            c++;
        }
        cout << c << "\n";
    }
}