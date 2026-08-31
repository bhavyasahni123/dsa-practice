class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int sum=0;
        int t=(n*(n+1))/2;
        for(int i=0;i<=n-1;i++){
            sum+=nums[i];
            
        }
        return (t-sum);

    }
};