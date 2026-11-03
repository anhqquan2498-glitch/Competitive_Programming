#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

void solve()
{
    string s;
    cin >> s;

    vector<char> nums;
    for (char c : s)
    {
        if (c != '+')
        {
            nums.push_back(c);
        }
    }

    sort(nums.begin(), nums.end());

    for (int i = 0; i < nums.size(); ++i)
    {
        cout << nums[i] << (i + 1 == nums.size() ? "" : "+");
    }
    cout << "\n";
}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}