class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n = heights.size();
        int maxWater = -1e9;
        int i=0,j=n-1;
        while(i<j){
            int minHeight = min(heights[i],heights[j]);
            int currWater = (j-i)*minHeight;
            maxWater = max(maxWater,currWater);
            if(minHeight == heights[i]){
                i++;
            }else{
                j--;
            }
        }
        return maxWater;
    }
};
