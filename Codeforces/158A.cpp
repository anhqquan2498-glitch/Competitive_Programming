#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;

    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int pass = 0;
    for (int i = 0; i < n; i++)
    {
        if ((a[i] >= a[k - 1]) && a[i] > 0)
            pass++;
    }
    cout << pass;
    return 0;
}