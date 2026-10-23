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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(head==NULL || head->next==NULL){
            return head;
        }
        stack<int> st;
        ListNode* temp= head;
        int pos=1;

        while(temp != NULL){
            if(pos>=left && pos<=right){
                st.push(temp->val);
            }
            temp=temp->next;
            pos++;
        }

        temp=head;
        pos=1;

        while(temp != NULL){
            if(pos>=left && pos<=right){
                temp->val=st.top();
                st.pop();
            }
            temp=temp->next;
            pos++;
        }

        return head;

    }
};