class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
         vector<int>::iterator it = nums.begin();

        while (it != nums.end())
        {
            if (find(it + 1, nums.end(), *it) != nums.end())
                return true;

            ++it;
        }

        return false;
    }
};
