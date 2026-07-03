class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
        int count =0;
        for( int i = 0 ;i<nums.size() ; i++){
            int a = nums[i]+ diff;
            int b =  a + diff;

         bool d =  binary_search(nums.begin(), nums.end(), a);
          bool j =  binary_search(nums.begin(), nums.end(), b);

          if( d && j){
            count++;
          }

        }
        return count;
        

    }
};