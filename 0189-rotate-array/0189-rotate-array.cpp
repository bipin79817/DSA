class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        k=k%n;

        // rotate all the element
        reverse(nums.begin(), nums.end());

        // reverse the first k elemnt 
        reverse(nums.begin(), nums.begin()+k);

        // reverse the rest element
        reverse(nums.begin()+k, nums.end());
    }
};