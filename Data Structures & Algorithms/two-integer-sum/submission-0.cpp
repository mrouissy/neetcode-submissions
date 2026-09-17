
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ret= {0,0};
        for(int i = 0; (i < (int)nums.size()); i++)
        {
            for(int j = i + 1; (j < (int)nums.size()); ++j)
            {
                if((nums[i] + nums[j]) == target)
                {
                    ret.clear();
                    ret.push_back(i);
                    ret.push_back(j);
                }
            }
        }
        return ret;
    }
};