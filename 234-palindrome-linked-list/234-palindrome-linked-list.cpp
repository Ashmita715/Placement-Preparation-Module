/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        vector<int> ans;
        if(head->next==NULL)
            return true;
        while(head!=NULL)
        {
            ans.push_back(head->val);
            head=head->next;
        }
        int n=ans.size();
        int i=0;
        int j=n-1;
        while(i<j)
        {
            if(ans[i]!=ans[j])
                return false;
            i++;
            j--;
        }
        return true;
    }
};