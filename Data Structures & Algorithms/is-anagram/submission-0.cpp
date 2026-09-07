
class Solution {
public:
    bool isAnagram(string s, string t) {
        size_t sl = s.length();
        size_t tl = t.length();
        if(sl!=tl)
        {
            return false;
        }
        int count[26] = {};
        for(int i=0;i<sl;i++)
        {
            count[s[i]-'a']++;
        }
        int count2[26] = {};
        for(int i=0;i<tl;i++)
        {
            count2[t[i]-'a']++;
        }
        for(int i=0;i<26;i++)
        {
            if(count[i]!=count2[i]){
                return false;
            }
        }
        return true;
    }
};
