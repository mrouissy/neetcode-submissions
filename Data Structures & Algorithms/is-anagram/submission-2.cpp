using namespace std;

class Solution {
public:
    int many_dup(string s, char c)
    {
        int count = 0;
        for (size_t i = 0; i < s.size(); i++)
        {
            if (c == s[i])
                count++;
        }
        return count;
    }

    bool isAnagram(string s, string t) {
        if (s.size() != t.size())
            return false;

        for (size_t i = 0; i < s.size(); i++)
        {
            if (s.find(s[i]) != i)
                continue;

            int count_s = many_dup(s, s[i]);
            int count_t = many_dup(t, s[i]);

            if (count_s != count_t)
                return false;
        }
        return true;
    }
};