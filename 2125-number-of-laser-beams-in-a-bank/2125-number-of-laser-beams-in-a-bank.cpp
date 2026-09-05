class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int ans = 0 ;
        int prev = 0;     

        for(string row :bank){
            int count =0 ;
            //count  number of 1's
            for(char ch : row ){
                if(ch == '1')count++;
            }
        

        if(count>0){
            ans += prev * count;
            prev = count;
        }
    }
        return ans;
    }
    
    
};