class Solution {
public:
    bool isVowel(char ch) {
     return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u';
    }

    int maxVowels(string s, int k) {
    int count = 0, ans = 0;

        for (int i = 0; i < s.size(); i++) {

    if (isVowel(s[i]))
                count++;
 if (i >= k && isVowel(s[i - k]))
                count--;

      if (i >= k - 1)
             ans = max(ans, count);
        }

     return ans;
    }
};