class Solution {
public:
    string minWindow(string s, string t) {
        int n = s.length(),m = t.length();
        vector<int>hash(256,0);
        int minLen = 1e9;
        int l=0,r=0,stIdx=-1 , cnt =0;
        for(int i=0;i<m;i++)hash[t[i]]++;
        while(r<n){
            if(hash[s[r]] > 0)cnt++;
            hash[s[r]]--;
            while(cnt == m){
                if(r-l+1 < minLen){
                minLen = r-l+1;
                stIdx = l;
                }
                hash[s[l]]++;
                if(hash[s[l]] > 0)cnt--;
                l++;
            }
            r = r+1;
        }
       return stIdx == -1 ? "":s.substr(stIdx,minLen);
    }
};
