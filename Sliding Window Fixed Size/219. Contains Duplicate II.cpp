class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,int>numsToIndex;
        for(int i=0; i<nums.size(); i++){
            if(numsToIndex.find(nums[i]) != numsToIndex.end() && abs(i - numsToIndex[nums[i]]) <= k){
                return true;
            }
            else numsToIndex[nums[i]]= i;
        }
        return false;
    }
};
