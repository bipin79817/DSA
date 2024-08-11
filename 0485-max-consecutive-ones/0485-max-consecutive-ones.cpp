class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count=0, num=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==1)
            count++;

            if(num<count)
            num=count;

            if(nums[i]==0)
            count=0;
        }
        return num;

        return (count);
    }
};