class Solution {
public:
    long long helper(vector<int>&piles,int hr){
        long long totalHr = 0;
        for(int i=0;i<piles.size();i++){
            totalHr += (piles[i] + hr - 1)/hr;
        }
        return totalHr;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1;
        int high = *max_element(piles.begin(),piles.end());
        int ans = INT_MAX;
        while(low <= high){
            int mid = low + (high-low)/2;
            long long totalHrs = helper(piles,mid);
            if(totalHrs <= h){
                ans = mid;
                high = mid-1;
            }else{
                low = mid+1;
            }
        }
      return ans;
    }
};
