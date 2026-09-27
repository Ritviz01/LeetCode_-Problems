class Solution {
public:
    string sortSentence(string s) {
       
        stringstream ss(s);
        int n;
        string word;

        while(ss >> word){
            n++;
        }
        ss.clear();
        ss.str(s);

        vector<string>ans(n);
        string result;  

        while(ss >> word){
            int position = word.back() - '0';
            word.pop_back();
            ans[position-1] = word;

        }
        for(int i = 0; i < ans.size(); i++) {
            result += ans[i];

            if(i != ans.size() - 1) {
                result += " ";
            }
        }
        return result;
    }
};