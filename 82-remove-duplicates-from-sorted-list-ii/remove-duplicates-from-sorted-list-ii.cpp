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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL) return head;
        ListNode* temp= head;
        unordered_map<int,int> mpp;
        while(temp != NULL){
            mpp[temp->val]++;
            temp= temp->next;
        }

        vector<int> arr;
        for(auto& it: mpp){
            if(it.second==1){
                arr.push_back(it.first);
            }
        }

        if(arr.empty()) return NULL;

        sort(arr.begin(), arr.end());

        ListNode* head1= new ListNode(arr[0]);
        ListNode* temp1=head1;
        for(int i=1;i<arr.size();i++){
            ListNode* newest= new ListNode(arr[i]);
            temp1->next= newest;
            temp1= newest;
        }

        return head1;
    }
};