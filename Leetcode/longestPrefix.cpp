#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution
{
public:
    string longestCommonPrefix(vector<string> &strs)
    {
        if (strs.size() == 1)
        {
            return strs[0];
        }
        string ans = "";
        sort(strs.begin(), strs.end());
        for (int i = 0; i < strs[0].size(); i++)
        {
            if (strs[0][i] == strs[strs.size() - 1][i])
            {
                ans += strs[0][i];
            }
            else
            {
                return ans;
            }
        }

        return ans;
    }
};
int main()
{
    Solution s;
    vector<string> strs = {"", ""};
    // vector<string>strs = {"flower","flavor","flash"};
    cout << s.longestCommonPrefix(strs);
    return 0;
}