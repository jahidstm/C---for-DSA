#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int roll;
    double marks;
};

bool cmp(Student a, Student b)
{
    if (a.marks > b.marks)
        return true;
    else
        return false;
}
int main()
{
    int n;
    cin >> n;
    Student a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].name >> a[i].roll >> a[i].marks;
    }
    sort(a, a + n, cmp);
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = i + 1; j < n; j++)
    //     {
    //         if (a[i].id > a[j].id)
    //         {
    //             swap(a[i], a[j]);
    //         }
    //     }
    // }

    for (int i = 0; i < n; i++)
    {
        cout << a[i].name << " " << a[i].roll << " " << a[i].marks << endl;
    }
    // cout << jahid.name << " " << jahid.id << " " << jahid.cgpa << endl;
    // cout << nusu.name << " " << nusu.id << " " << nusu.cgpa << endl;

    return 0;
}