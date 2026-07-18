class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        vector<string>morse = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        unordered_set<string>st;

        for( string word : words){

           string count = "";

            for(char c :word){

                count+=morse[c - 'a'];

            }

            st.insert(count);

        }

        return st.size();
    }
};