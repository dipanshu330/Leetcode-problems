class Solution {
public:
    char findTheDifference(string s, string t) {
        for(int i = 0; i < t.length(); i++) {
            int count = 0;

            for(int j = 0; j < s.length(); j++) {
                if(t[i] == s[j]) {
                    count++;
                    s[j] = '#'; 
                    break;
                }
            }

            if(count == 0) {
                return t[i]; 
            }
        }
        return ' ';
    }
};