class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        if(n == 0)return 0;
        unordered_map<char,int>mp;
        int l = 0,r=0;
        int maxWindowSz = 0;
        while(r<n){
            mp[s[r]]++;
            while(mp[s[r]] > 1){
                mp[s[l]]--;
                l++;
            }
            int currWindowSz = r - l +1;
            maxWindowSz = max(maxWindowSz,currWindowSz);
            r++;
        }
        return maxWindowSz;
    }
};
