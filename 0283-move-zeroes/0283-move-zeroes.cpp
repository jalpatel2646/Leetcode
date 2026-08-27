class Solution {
public:
    void moveZeroes(vector<int>& num) {
        int j=0;  
        for(int i=0;i<num.size();i++){
            if (num[i]!=0){
                
                swap(num[i],num[j]);
            
                j++;  
            }
        }
    }
};