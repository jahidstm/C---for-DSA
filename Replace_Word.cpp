#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    for (int i = 0; i < T; i++)
    {
        string s, in;
        cin >> s >> in;

        int pos = s.find(in);
        while (pos != -1)
        {
            s.replace(pos, in.size(), "#");
            pos = s.find(in, pos + 1);
        }

        cout << s << endl;
    }

    return 0;
}
