class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> sums;
        int n = nums.size();
        for(int i = 0 ;i<n;i++)
        {
            if (sums.find(target - nums[i]) != end(sums))
                return {sums[target - nums[i]], i};
            sums[nums[i]]=i;
        }
        return {-1,-1};
    }
};