class Solution
{
public:
    bool Helper(string &str, int i, int n)
    {
        if (i == n - 1)
        {
            return true;
        }
        return str[i] == str[n - i - 1] && Helper(str, i + 1, n);
    }
    bool isPalindrome(string s)
    {
        string str;
        for (int i = 0; i < s.size(); ++i)
        {
            if (s[i] >= 'A' && s[i] <= 'Z' || s[i] >= 'a' && s[i] <= 'z' || s[i] >= '0' && s[i] <= '9')
            {
                str.push_back(s[i]);
            }
        }

        transform(str.begin(), str.end(), str.begin(), ::tolower);
        int i = 0;
        int n = str.size();
        if (str.size() == 0)
            return true;
        return Helper(str, i, n) == true ? true : false;
    }
};