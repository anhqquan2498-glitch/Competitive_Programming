#include <iostream>
#include <cmath>
using namespace std;
using ll = long long;
void bank()
{
    ll n, k;
    cin >> n >> k;
    ll sum = 0;
    if (n <= k)
        sum = 2 * n;
    else
        sum = (k - 1) * 2 + pow(2, n - k + 1);

    cout
        << sum << '\n';
}
int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        bank();
    }
    return 0;
}