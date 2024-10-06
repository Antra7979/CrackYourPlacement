class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
      int leftSum=0;
      int rightSum=0;

      for(int i=0; i<k; i++){
        leftSum+= cardPoints[i];
      }
      int maxSum= leftSum;
      int rightIn=cardPoints.size()-1;

      for(int i=k-1; i>=0; i--){
        leftSum-= cardPoints[i];
        rightSum+= cardPoints[rightIn];
        rightIn--;

        maxSum= max(maxSum, leftSum+rightSum);
      }
      return maxSum;

    }
};