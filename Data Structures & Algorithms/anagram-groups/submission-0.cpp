using namespace std;

class Solution {
public:
   
    bool isAnagram(string s, string t) {
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        return s == t;
    }
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string, vector<string>> ret;
        for (size_t i = 0; i < strs.size(); ++i) {
            string key = strs[i];
            sort(key.begin(), key.end());
            ret[key].push_back(strs[i]);
        }

        vector<vector<string>> result;
        for (map<string, vector<string> >::iterator it = ret.begin(); it != ret.end();++it)
            result.push_back(it->second);
        return result;
    }

};