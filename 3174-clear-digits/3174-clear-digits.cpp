class Solution {
public:
    string clearDigits(string s) {
        string v;
         for(int i =0;i<s.length();i++){

            if( s[i]>= '0' && s[i]<= '9'){
              
                if(!v.empty()) {
                    v.pop_back();  // nearest left letter remove
                }
            }
            else{
                v.push_back(s[i]);
            }
        }
        
        return v;
    }
};