class Solution {
public:
    bool isPalindrome(string s) {
        string word;
        for(char c:s){
            if(isalnum(c)) {
                word += tolower(c);
            }
        }
        int left =0;
        int right = word.size()-1;
        while(left<right){
            if(word[left] != word[right]){
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
};