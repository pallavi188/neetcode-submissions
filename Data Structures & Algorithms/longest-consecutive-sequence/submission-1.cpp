class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0)return 0;
       unordered_set<int>st;
       for(int num : nums){
        st.insert(num);
       }
       int maxLen = 1;
       for(auto it : st){
        if(st.find(it-1) == st.end()){
            int cnt = 1;
            int x = it;
            while(st.find(x+1) != st.end()){
                x = x+1;
                cnt = cnt + 1;
            }
            maxLen = max(maxLen,cnt);
        }
       }
       return maxLen;
    }
};
