class Solution {
public:
    int countValidPrefixes(string s) {
        int count0 = 0;
        int count1 = 0;
        int actcount=0;
        for( int i = 0 ; i<s.length();i++){
            if( s[i] == '0' ){
                count0++;
            }else{
                count1++;
            }


            
            
            if(abs(count0 - count1) <= 1){
            actcount++;
        }
           
        }

       
      

        return actcount ;

        

        
    }
};