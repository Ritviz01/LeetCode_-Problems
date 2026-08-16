class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        int num =0;
        stringstream ss(text);
        string word;

        while(ss>>word){
           bool can = true;
            for( int i = 0 ;i<brokenLetters.length();i++){
                if( word.find(brokenLetters[i]) != string::npos  ){
                    can = false;
                    break;
                }
                
            }
            
            if( can ){
                num++;
            }
        }
        return num ;
    }
};