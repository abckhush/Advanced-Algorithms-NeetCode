class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold){
        int count=0;
        int t=threshold*k;
        float sum=0;
        for(int i=0; i<arr.size(); i++){
            sum= sum + arr[i];
            if(i<k-1) continue;
            if(i>k-1){
                sum= sum- arr[i-k];
            }
            if(sum>=t){
                count++;
            }
        }
        return count;
    }
};
