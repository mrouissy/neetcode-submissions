using namespace std;
class Solution {
public:
    string encode(vector<string>& strs) {
        if (strs.empty())
            return "";

        string result;
        for (const string& str : strs) {
            result += to_string(str.size()) + "@" + str;
        }
        return result;
    }

    vector<string> decode(string s) {
        vector<string> result;
        if (s.empty())
            return result;

        size_t i = 0;
        while (i < s.size()) {
            size_t atPos = s.find('@', i);
            if (atPos == string::npos)
                break;

            int len = stoi(s.substr(i, atPos - i));
            i = atPos + 1;
            result.push_back(s.substr(i, len));
            i += len;
        }
        return result;
    }
};