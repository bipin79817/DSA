class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int left=1;
        int right=nums.size()-2;
        
        if(nums.size()==1){
            return 0;
        }
        
        if(nums[0]>nums[1]){
            return 0;
        }
        
        if(nums[nums.size()-1]>nums[nums.size()-2]){
            return nums.size()-1;
        }
        
        while(left<=right){
            int mid=left+(right-left)/2;
            
            if(nums[mid]>nums[mid+1] && nums[mid]>nums[mid-1]){
                return mid;
            }
            if(nums[left]>nums[left+1] && nums[left]>nums[left-1]){
                return left;
            }else{
                left=left+1;
            }
        }
        return 1;
    }
};