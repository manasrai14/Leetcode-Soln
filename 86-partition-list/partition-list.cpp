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
    ListNode* partition(ListNode* head, int x) {
        ListNode* temp= head;
        ListNode* prev=  new ListNode(-1);
        ListNode* nextNode= new ListNode(-1);

        ListNode* mover= prev;
        ListNode* prevMover=nextNode;
        while(temp != NULL){
            if( temp->val < x){
                mover->next=temp;
                mover=mover->next;
            }
            else{
                prevMover->next=temp;
                prevMover=prevMover->next;
            }
            temp=temp->next;
        }
        mover->next=nextNode->next;
        prevMover->next= NULL;

        return prev->next;
    }
};