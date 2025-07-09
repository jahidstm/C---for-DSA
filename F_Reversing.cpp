#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int x = 0, y = n - 1;
    while (x < y)
    {
        int temp = v[x];
        v[x] = v[y];
        v[y] = temp;
        x++;
        y--;
    }

    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}