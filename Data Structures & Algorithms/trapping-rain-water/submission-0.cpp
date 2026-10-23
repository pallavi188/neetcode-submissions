class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        if(n<3)return 0;
        int l = 1;
        int r = n-2;
        int lmax = height[l-1];
        int rmax = height[r+1];
        int ans = 0;
        while(l<=r){
            if(rmax <= lmax){
                ans += max(0,rmax-height[r]);
                rmax = max(rmax,height[r]);
                r--;
            }else{
                ans += max(0,lmax-height[l]);
                lmax = max(lmax,height[l]);
                l++;
            }
        }
        return ans;
    }
};
