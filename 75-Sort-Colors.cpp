class Solution {
public:
    void sortColors(vector<int>& nums) {
        int c0=0,c1=0,c2=0;
        for (int i :nums){
            if(i==0) c0++;
            if(i==1) c1++;
            if(i==2) c2++;
        }
        for(int i = 0; i<c0;i++){
            nums[i]= 0;
        }
        for(int i = c0; i<c0+c1;i++){
            nums[i]= 1;
        }
        for(int i = c0+c1; i<c0+c1+c2;i++){
            nums[i]= 2;
        }
    }
};