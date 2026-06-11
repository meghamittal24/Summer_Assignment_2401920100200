class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n=nums.size();
        vector <int> ans(n);
        int g=0,r=n-1,pos=n-1;
        while(g<=r){
            if(abs(nums[g])>abs(nums[r])){
                ans[pos--]=nums[g] *nums[g];
                g++;
            }
            else{
                ans[pos--]=nums[r]*nums[r];
                r--;
            }
        }
        return ans;
    }
};
