//beats 100%
class Solution {
public:
    string reversePrefix(string word, char ch) {
        int i = word.find(ch);

        if(i != -1)
            reverse(word.begin(), word.begin() + i + 1);
            
        return word;
    }
};
