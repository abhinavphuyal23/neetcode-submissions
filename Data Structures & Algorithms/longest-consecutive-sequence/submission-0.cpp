class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>numl(nums.begin(),nums.end());
        int longest = 0;
        for(int num : numl)
        {
            if(numl.find(num-1)==numl.end()){
                int current = num;
                int length = 1;
                while(numl.find(current+1)!=numl.end()){
                    current++;
                    length++;
                }
                longest = max(longest,length);
            }
            

        }
        return longest;
        
    }
};
