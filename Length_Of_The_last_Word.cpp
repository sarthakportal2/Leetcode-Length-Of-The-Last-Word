class Solution {
public:
    int lengthOfLastWord(string s) {
        int ans=0;int r=s.size()-1;//Vairables declare and size declare
        while(r>=0){//iterate r>=0
            if(s[r]!=' '){ ans++;}//incrementing ans to the string's right indx val
            else if (ans>0)return ans;//printing ans to its greater val
            r--;}//word's right indx pos decrement 
        return ans; }};//printing resultant output
