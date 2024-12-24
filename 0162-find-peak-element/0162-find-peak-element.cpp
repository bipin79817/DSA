class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        //ONE APPROACH
        
//         int left=1;
//         int right=nums.size()-2;
        
//         if(nums.size()==1){
//             return 0;
//         }
        
//         if(nums[0]>nums[1]){
//             return 0;
//         }
        
//         if(nums[nums.size()-1]>nums[nums.size()-2]){
//             return nums.size()-1;
//         }
        
//         while(left<=right){
//             int mid=left+(right-left)/2;
            
//             if(nums[mid]>nums[mid+1] && nums[mid]>nums[mid-1]){
//                 return mid;
//             }
//             if(nums[left]>nums[left+1] && nums[left]>nums[left-1]){
//                 return left;
//             }else if(nums[right]>nums[right+1] && nums[right]>nums[right-1]){
//                 return right;
//             }else{
//                 left=left+1;
//                 right=right-1;
//             }
//         }
//         return 1;
        
        // SECOND METHOD
        
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
            }else if(nums[mid]>nums[mid-1]){
                left=mid+1;
            }else{
                right=mid-1;
            }
        }
        return 1;
    }
};