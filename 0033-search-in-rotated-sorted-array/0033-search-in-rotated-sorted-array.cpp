class Solution {
public:
    int search(vector<int>& nums, int target) {
    //     for(int i=0; i<nums.size(); i++){
    //         if(target==nums[i]){
    //             return i;
    //         }
    //     }
    //     return -1;
        
        // USING SECOND METHOD
        int left=0;
        int right=nums.size()-1;
        while(left<=right){
            int mid=left+(right-left)/2;
            if(target==nums[mid]){
                return mid;
            }
            
            if(nums[left]<=nums[mid]) // left part is sorted in the array
            {
                if(nums[left]<=target && target<nums[mid]){
                    right=mid-1;
                }else{
                    left=mid+1;
                }
            }else{
                if(target>nums[mid] && target<=nums[right]){
                    left=mid+1;
                }else{
                    right=mid-1;
                }
            }
        }
        return -1;
     }
};