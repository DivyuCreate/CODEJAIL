#include <bits/stdc++.h>
using namespace std;
int main()
{
    int h[10];
    memset(h, 0, sizeof(h));
    int s;
    bool animal = false;
    for (int i = 0; i < 6; i++)
    {
        cin >> s;
        h[s]++;
        if (h[s] == 4)
        {
            animal = true;
            h[s] = 0;
        }
    }
    if (!animal)
        cout << "Alien";
    else
    {
        for (int i = 1; i <= 9; i++)
        {
            if (h[i] == 1)
            {
                cout << "Bear";
                break;
            }
            else if (h[i] == 2)
            {
                cout << "Elephant";
                break;
            }
        }
    }
}