class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int>ans(n);
       
        vector<int>prePro(n,1),suffixPro(n,1);
        for(int i=1;i<n;i++){
            prePro[i] = prePro[i-1]*nums[i-1];
        }
        for(int i=n-2;i>=0;i--){
            suffixPro[i] = suffixPro[i+1]*nums[i+1];
        }
        for(int i=0;i<n;i++){
            ans[i] = prePro[i]*suffixPro[i];
        }
        return ans;
    }
};
