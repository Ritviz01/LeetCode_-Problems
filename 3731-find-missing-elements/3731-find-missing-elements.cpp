class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int> ans; 
        sort(nums.begin(), nums.end());

        int n = nums.size()-1;

        unordered_set<int> st(nums.begin(), nums.end());
        
        for( int i = nums[0]+1 ;i<nums[n];i++){
            if(st.find(i) == st.end()){
                ans.push_back(i);
            }
        }
       
        return ans;
    }
};