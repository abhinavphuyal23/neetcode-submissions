class Solution {
public:

    string encode(vector<string>& strs) {
        string encoded = "";
        for(string s:strs)
        {
            encoded += to_string(s.size())+"#"+s;
        }
        return encoded;

    }

    vector<string> decode(string s) {
        vector<string>result;
        int i = 0;
        while(i < s.size())
        {
            int j = i;
            while(s[j] != '#'){
                j++;
            }
            int length = stoi(s.substr(i,j-i));
            int start = j + 1;
            result.push_back(s.substr(start,length));
             i = start + length;
        }
        return result;

    }
};
