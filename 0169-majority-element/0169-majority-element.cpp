class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int count=0;
        
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]==nums[i-1])
                count++;
            else
                count=0;
            if(count>=nums.size()/2)
                return nums[i];
            
        }
    return nums[0];
    }
};