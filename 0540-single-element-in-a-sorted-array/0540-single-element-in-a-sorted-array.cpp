class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n=nums.size();
        if(n==1) return nums[0];
       
        
        if(nums[0]!=nums[1]) return nums[0];
        else if(nums[n-1]!=nums[n-2]) return nums[n-1];
        
         int st=1;
        int end=nums.size()-2;
        while(st<=end)
        {
            int mid=(st+end)/2;
            if(nums[mid]!=nums[mid+1] && nums[mid]!=nums[mid-1]) return nums[mid];
            
            // even odd [same element]-> ans present in right half, so eliminate left
            if(((mid%2==0) && (nums[mid]==nums[mid+1])) || ((mid%2==1) && (nums[mid]==nums[mid-1]))) st=mid+1;
            
            else end=mid-1;
        }
        
        return -1;
    }
};