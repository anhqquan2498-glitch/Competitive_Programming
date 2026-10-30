#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

void jump()
{

    int n;
    cin >> n;
    vector<int> L(n);
    for (int i = 0; i < n; i++)
        cin >> L[i];

    int pos = 0;

    for (int i = n - 1; i >= 0; i--)
        pos = L[i] * 2 - pos;

    cout << pos / 2 << endl;
}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        jump();
    }

    return 0;
}