class Solution {
public:
    vector<int> nextLargerNodes(ListNode* head) {
  vector<int> temp;
 while (head != NULL) {
            temp.push_back(head->val);
      head = head->next;
        }
vector<int> ans(temp.size(), 0);

        for (int i = 0; i < temp.size(); i++) {
 for (int j = i + 1; j < temp.size(); j++) {

      if (temp[j] > temp[i]) {
            ans[i] = temp[j];
break;
                }
            }
        }  return ans;
    }
};