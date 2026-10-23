class Solution {
public:
    bool isPalindrome(string s) {
        int n = s.length();
        //convert the sentence into a single word
        string t = "";
        for(int i=0;i<n;i++){
           if(s[i] != ' ' && isalnum(s[i])){
            t += tolower(s[i]);
           }
        }
        int i=0,j=t.length()-1;
        while(i<j){
            if(t[i] != t[j])return false;
            else{
                i++;
                j--;
            }
        }
        return true;
    }
};
