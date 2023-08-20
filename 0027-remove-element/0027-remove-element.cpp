class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n;
        n=nums.size();
        int d=0;
        for(int i=0;i<n;i++){
            if(nums[i]!=val){
                nums[d]=nums[i];
                d++;

            }

        }
        return d;
        
    }
    
};