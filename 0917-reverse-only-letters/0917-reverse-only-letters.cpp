class Solution {
public:
    string reverseOnlyLetters(string s) {
        int a=0;
        int b=s.size()-1;
        while(a<b){
            if(isalpha(s[a]) && isalpha(s[b])){
                swap(s[a],s[b]);
                a++;
                b--;
            }
            else if (!isalpha(s[a])){
                a++;
            }
            else{
                b--;

            }
        }
        return s;
    }
};