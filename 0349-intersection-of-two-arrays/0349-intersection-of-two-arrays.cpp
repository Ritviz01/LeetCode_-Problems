class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(), nums1.end());

        set<int> used;

        vector<int> ans;

        for(int num : nums2){

            if(binary_search(nums1.begin(),nums1.end(),num)){

                if(used.find(num) == used.end()){

                    ans.push_back(num);

                    used.insert(num);
                }
            }

        }
        

        return ans;
        
    }
};