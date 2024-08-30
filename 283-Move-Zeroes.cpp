class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int left = 0;
        int right = 0;
        while(left< nums.size() & right < nums.size()){
            if(nums[left]!=0) {
                left++;
                right++;
                }
            else if(nums[left]== 0 & nums[right]!=0){
                 nums[left]=nums[right];
                 nums[right]=0;
            } 
            else right++;
        }
    }
};