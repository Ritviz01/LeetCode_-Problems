class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector<pair<int,int>> ans;
        
        for( int i =0 ;i<mat.size();i++){
            int count = 0 ;
            for( int j = 0 ; j<mat[i].size();j++){
                if(mat[i][j] == 1 ){
                    count++;
                }

            }
                ans.push_back({count , i});
        }

        sort(ans.begin(), ans.end());
        vector<int> v;

        for(int indc = 0 ; indc < k;  indc++){
            v.push_back(ans[indc].second);
        }
        
        return v;
    }
};