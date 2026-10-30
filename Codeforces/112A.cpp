#include <iostream>
#include <cctype>
#include <string>

using namespace std;

void alphalbet()
{

    string a, b;
    cin >> a >> b;

    int suma = 0, sumb = 0;
    for (int i = 0; i < a.size(); i++)
    {
        a[i] = tolower(a[i]);
        suma += a[i];
    }
    for (int i = 0; i < b.size(); i++)
    {
        b[i] = tolower(b[i]);
        sumb += b[i];
    }
    if (a < b)
        cout << -1;
    else if (a > b)
        cout << 1;
    else
        cout << 0;
}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    alphalbet();

    return 0;
}