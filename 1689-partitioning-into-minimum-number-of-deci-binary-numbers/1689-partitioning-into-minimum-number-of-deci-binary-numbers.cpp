class Solution {
public:
    int minPartitions(string n) {
        
        char ch = *max_element(n.begin(), n.end());  // ch = '3'
        int ans = ch - '0';  

        return ans;

    }
};