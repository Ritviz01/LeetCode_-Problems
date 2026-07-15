class Solution {
public:
    string to_binary(int n){
        string bin = "";

        while(n>0){
            bin = char((n%2)+'0' ) + bin;

            n/=2;

        }
        return bin;
    }


    string convertDateToBinary(string date) {
        int year = stoi(date.substr(0,4));
        int month = stoi(date.substr(5,2));
        int day = stoi(date.substr(8,2));
        
        
        return to_binary(year)+"-"+to_binary(month)+"-"+to_binary(day);

    }
};