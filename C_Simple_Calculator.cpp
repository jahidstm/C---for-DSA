#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int a, b;
    cin >> a >> b;
    int sum = a + b;
    int sub = a - b;
    int mult = a * b;
    cout << a << " + " << b << " = " << sum << endl;
    cout << a << " * " << b << " = " << mult << endl;
    cout << a << " - " << b << " = " << sub << endl;

    return 0;
}