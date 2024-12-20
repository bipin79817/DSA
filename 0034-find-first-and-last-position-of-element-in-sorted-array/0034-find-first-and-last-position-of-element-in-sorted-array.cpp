class Solution {
public:
    int floorValue(vector<int>& nums, int target){
        int left=0;
        int right=nums.size()-1;
        int floor=-1;
        while(left<=right){
            int mid=left+(right-left)/2;
            if(nums[mid]<target){
                floor=mid;
                left=mid+1;
            }else{
                right=mid-1;
            }
        }
        return floor;
    }
    int highValue(vector<int>& nums, int target){
        int left=0;
        int right=nums.size()-1;
        int high=-1;
        while(left<=right){
            int mid=left+(right-left)/2;
           if(target>=nums[mid]){
                high=mid;
                left=mid+1;
            }else{
                right=mid-1;
            }
        }
        return high;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
//         int first=-1;
//         int last=-1;
//         for(int i=0; i<nums.size(); i++){
//             if(target==nums[i]){
//                if(first==-1) {first=i;}
//                 last=i;
                
//             }
//         }
//         return {first, last};
        // NOW USING THE BINARY SEARCH IN LOGN TIME COMPLEXIETY
        
        int lb=floorValue(nums, target)+1;
        int ub=highValue(nums, target);
        if(lb>=nums.size() || nums[lb]!=target){
            return{-1, -1};
        }
        return{lb,ub};
          
    }
};