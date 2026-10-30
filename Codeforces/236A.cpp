#include <iostream>
#include <string>
#include <set>
using namespace std;

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string a;
    cin >> a;

    set<char> abc(a.begin(), a.end());

    if (abc.size() % 2 == 0)
        cout << "CHAT WITH HER!";
    else
        cout << "IGNORE HIM!";

    return 0;
}