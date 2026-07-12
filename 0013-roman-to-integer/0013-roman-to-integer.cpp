class Solution {
public:
    int romanToInt(string s) {
        map<char, int> m1={
            {'I',1},
            {'V',5},
            {'X',10},
            {'L',50},
            {'C',100},
            {'D',500},
            {'M',1000},

        };
        int sum =0 ;

        for(int i = 0 ; i<s.length() ;i++){
            if((m1[s[i]] < m1[s[i+1]])){
                sum -= m1[s[i]];
            }
            else{
                sum+= m1[s[i]];

            }
        }

        return sum ;

    }
};