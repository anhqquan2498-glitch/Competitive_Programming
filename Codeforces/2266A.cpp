
#include <iostream>

using namespace std;

void solve()
{
    int a;
    cin >> a;
    int p[3];
    int weak = 99999999;
    for (int i = 0; i < 3; i++)
    {
        cin >> p[i];
        if (p[i] < weak)
            weak = p[i];
    }
    cout << a - weak << endl;
}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;

    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}