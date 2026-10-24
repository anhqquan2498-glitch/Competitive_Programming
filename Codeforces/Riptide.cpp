//2254A

#include <iostream>
#include <algorithm>
using namespace std;
using ll = long long;

void solve()
{

    ll a, b, c;
    cin >> a >> b >> c;
    int count = 0;

    while (true)
    {
        if (a == b || b == c || a == c)
            break;

        ll M = max({a, b, c});
        ll m = min({a, b, c});

        if (a == M)
            a--;
        else if (b == M)
            b--;
        else if (c == M)
            c--;

        if (a == m)
            a++;
        else if (b == m)
            b++;
        else if (c == m)
            c++;

        count++;
    }
    cout << count << "\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}
