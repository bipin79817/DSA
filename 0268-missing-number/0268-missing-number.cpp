class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int sum=0;
        for(int i=0; i<n; i++)
        {
            sum=sum+nums[i];
        }
        int s=n*(n+1)/2;
        return (s-sum);
        
    }
};