class Solution {
public:
    string reverseVowels(string s) {
        string str ="";
        for(auto & i :s)
        {
            if( i =='a' || i == 'e' || i =='i' || i=='o' || i=='u' || i == 'A' || i=='E' ||i=='I' || i=='O' || i=='U')
            {
                str+=i;
            }
        }
        reverse(str.begin(),str.end());
        int j=0;
        int k=0;
        for(auto & i:s)
    {
        if(i=='a'||i=='e'||i=='i'||i=='o'||i=='u'||i=='A'||i=='E'||i=='I'||i=='O'||i=='U')
        {
            s[k]=str[j];
            j++;

        }
        k++;
    }
    return s;}
};