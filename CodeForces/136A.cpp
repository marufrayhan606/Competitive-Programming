#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int a[n], friends[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        friends[a[i] - 1] = i + 1;
    }

    for (int i = 0; i < n; i++)
    {
        cout << friends[i] << " ";
    }

    return 0;
}
