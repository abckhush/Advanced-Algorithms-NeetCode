class Solution {
public:
    int kadanesMax(vector<int>&nums, int n){
        int sum= 0;
        int maxSum= INT_MIN;
        for(int i=0; i<n; i++){
            sum= sum + nums[i];
            if(maxSum<sum){
                maxSum= sum;
            }
            if(sum<0){
                sum=0;
            }
        }
        return maxSum;
    }

    int kadanesMin(vector<int>&nums, int n){
        int sum= 0;
        int minSum= INT_MAX;
        for(int i=0; i<n; i++){
            sum= sum+nums[i];
            if(minSum>sum){
                minSum= sum;
            }
            if(sum>0){
                sum=0;
            }
        }
        return minSum;
    }

    int maxSubarraySumCircular(vector<int>& nums) {
        int n= nums.size();
        int sum= accumulate(nums.begin(), nums.end(), 0);
        int maxSum= kadanesMax(nums, n);
        int minSum= kadanesMin(nums,n);
        if(maxSum>0){
            return max(maxSum, sum-minSum);
        }
        return maxSum;
    }
};
