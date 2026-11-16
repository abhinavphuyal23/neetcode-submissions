class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map <char,int>need;
        unordered_map<char,int>window;
        for(char c : t){
            need[c]++;
        }
        int required = need.size();
        int formed = 0;
        int left = 0;
        int minLength = INT_MAX;
        int start = 0 ;
        for(int right = 0 ; right<s.size(); right++){
            char c = s[right];
            if(need.count(c)){
                window[c]++;
                if(window[c]==need[c]){
                    formed++;
                }
            }
            while(formed==required){
                if(right-left+1<minLength){
                    minLength = right-left+1;
                    start = left;
                }
                char leftChar =  s[left];
                if(need.count(leftChar)){
                    if(window[leftChar]==need[leftChar]){
                        formed--;
                    }
                    window[leftChar]--;
                }
                left++;
            }
        }
        if(minLength == INT_MAX){
            return "";
        }
        return s.substr(start,minLength);
        
    }
};
