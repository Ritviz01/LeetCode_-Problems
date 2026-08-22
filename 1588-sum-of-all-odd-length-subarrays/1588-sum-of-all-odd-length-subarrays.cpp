class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int sum = 0;
        for(int i = 0 ;i<arr.size();i++){
            int subsum = 0;

            for( int j = i ;j<arr.size();j++){
                 subsum += arr[j];

                int len = j - i + 1;

                if( len%2 != 0){
                    sum+=subsum;
                }
            }
        }
        return sum ;
    }
};