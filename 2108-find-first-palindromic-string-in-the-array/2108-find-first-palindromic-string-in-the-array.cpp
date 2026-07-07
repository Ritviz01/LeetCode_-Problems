class Solution {
public:
    bool palindrome(string word){
        int i= 0 ;
        int j = word.size()-1;
        
        while(i<j){
            if(word[i]!=word[j]){
                return false;
            }
            i++;
            j--;

        }
        return true;
    }




    string firstPalindrome(vector<string>& words) {


        for( int i=0 ; i<words.size();i++){
            if(palindrome(words[i])){
                return words[i];
            }
        }
        return "";
        
    }
};