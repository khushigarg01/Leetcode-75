class Solution {
public:
    string decodeString(string s) {
        stack<string> strSt;
        stack<int> numSt;
        string curr = "";
        int num = 0;

        for (char c : s) {
            if (isdigit(c)) {
                num = num * 10 + (c - '0');   // build number
            } 
            else if (c == '[') {
                numSt.push(num);              // save number
                strSt.push(curr);             // save prev string
                num = 0; 
                curr = "";
            } 
            else if (c == ']') {
                int repeat = numSt.top(); numSt.pop();
                string temp = "";
                for (int i = 0; i < repeat; i++) temp += curr;
                curr = strSt.top() + temp; strSt.pop();
            } 
            else {
                curr += c;                     // add letters
            }
        }
        return curr;
    }
};
