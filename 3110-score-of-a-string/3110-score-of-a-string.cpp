class Solution {
public:
    int scoreOfString(string s) {
        int res=0;
        for(int i=1;i<s.size();i++)
        {
            int temp=abs(s[i]-s[i-1]);
            res+=temp;
        }
        return res;
    }
};