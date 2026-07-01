class Solution {
public:
    bool detectCapitalUse(string word) {
        int uppercase=0 ;

        for( char a : word){
            if( isupper(a)){
                uppercase++;
            }
        }
        return uppercase == 0
               || uppercase==word.length()
               || (uppercase ==1 && isupper(word[0]));
    }
};