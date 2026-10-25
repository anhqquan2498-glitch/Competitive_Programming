#include <iostream>
#include <string>

using namespace std;

void solve()
{

    string s;
    cin >> s;
    int l = s.length();
    if (l > 10)
        cout << s[0] << l - 2 << s[l - 1] << "\n";

    else
        cout << s << endl;
}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}