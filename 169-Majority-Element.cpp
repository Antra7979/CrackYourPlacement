class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int ans = 0;
        for(int i = 0 ; i <= nums.size()/2;i++){
            ans = nums[i];
        }
        return ans;
    }
};