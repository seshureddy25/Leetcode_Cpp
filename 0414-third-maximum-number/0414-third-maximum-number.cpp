class Solution {
public:
    int thirdMax(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int prev=nums[nums.size()-1];
        int count=0;
        for(int i=nums.size()-2;i>=0;i--)
        {
            if(prev!=nums[i])
            {
                count++;
                prev=nums[i];
                if(count==2)
                {
                    return nums[i];
                }
            }
        }
        return nums[nums.size()-1];
    }
};