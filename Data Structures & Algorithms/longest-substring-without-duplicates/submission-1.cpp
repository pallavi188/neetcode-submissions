class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        if(n == 0)return 0;
        unordered_map<char,int>mp;
        int l = 0,r=0;
        int maxWindowSz = 0;
        while(l<n && r<n){
            mp[s[r]]++;
            for(auto it:mp){
                if(it.second > 1){
                    mp[s[l]]--;
                    l++;
                }
            }
            r++;
            int currWindowSize = r-l+1;
            maxWindowSz = max(maxWindowSz,currWindowSize);
        }
        return maxWindowSz-1;
    }
};
