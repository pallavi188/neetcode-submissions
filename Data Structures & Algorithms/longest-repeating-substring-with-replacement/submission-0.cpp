class Solution {
public:
    int characterReplacement(string s, int k) {
        int n = s.length();
        unordered_map<char,int>freq;
        int maxFreqCnt = 0;
        int l=0,maxF = 0;
        for(int r=0;r<n;r++){
            freq[s[r]]++;
            maxF = max(maxF,freq[s[r]]);
            while((r-l+1) - maxF > k){
                freq[s[l]]--;
                l++;
            }
            maxFreqCnt = max(maxFreqCnt,r-l+1);
        }
        return maxFreqCnt;
    }
};
