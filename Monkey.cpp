#include <bits/stdc++.h>
using namespace std;

int main()
{
    char a[100005];
    while (cin.getline(a, 100005))
    {
        int len = 0;
        while (a[len] != '\0')
        {
            len++;
        }
        sort(a, a + len);
        for (int i = 0; i < len; i++)
        {
            if (a[i] == ' ')
            {
                continue;
            }
            else
            {
                cout << a[i];
            }
        }
        cout << endl;
    }

    return 0;
}
