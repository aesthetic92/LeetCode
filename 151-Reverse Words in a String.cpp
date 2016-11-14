class Solution {
public:
    void reverseWords(string &s) 
    {
        string ss;
        int len = s.length() - 1;
        while(len >= 0) 
        {
            while(len >= 0 && s[len] == ' ')
            {
                len--;
            }
            if(len < 0)
            {
                break;
            }
            if(!ss.empty())
            {
                ss.push_back(' ');
            }
            string rs;
            while(len >= 0 && s[len] != ' ')
            {
                rs.push_back(s[len--]);
            }
            reverse(rs.begin(), rs.end());
            ss.append(rs);
        }
        s = ss;
    }
};