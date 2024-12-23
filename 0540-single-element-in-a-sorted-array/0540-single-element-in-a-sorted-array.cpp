class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
    //BRUTE FORCE APPROACH
        
      //   if(nums.size()==1){
      //       return nums[0];
      //   }
      //   for(int i=0;i<nums.size(); i++){
      //       if(i==0){
      //           if(nums[i]!=nums[i+1]){
      //               return nums[i];
      //           }
      //       }else if(i==nums.size()-1){
      //           if(nums[i]!=nums[i-1]){
      //               return nums[i];
      //           }
      //       }else{
      //           if(nums[i]!=nums[i+1] && nums[i]!=nums[i-1]){
      //               return nums[i];
      //           }
      //       }
      //   }
      // return 0;
        
    // OPTIMAL SOLUTION
        
        if(nums.size()==1){
            return nums[0];
        }
        
        if(nums[0]!=nums[1]){
            return nums[0];
        }
        
        if(nums[nums.size()-1]!=nums[nums.size()-2]){
            return nums[nums.size()-1];
        }
        
        int left=1;
        int right=nums.size()-2;
        while(left<=right){
            int mid=left+(right-left)/2;
            if(nums[mid]!=nums[mid+1] && nums[mid]!=nums[mid-1]){
                return nums[mid];
            }
            
            if(mid%2==0 && nums[mid]==nums[mid+1] || mid%2==1 && nums[mid]==nums[mid-1]){
                left=mid+1;
            }else{
                right=mid-1;
            }
        }
        return 0;
    }
};