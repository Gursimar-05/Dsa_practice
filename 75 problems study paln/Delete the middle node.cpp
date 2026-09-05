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
    ListNode* deleteMiddle(ListNode* head) {
        ListNode* temp;
        ListNode* prev;
        prev=NULL;
        temp=head;
        int n=0;
        int middle;
        while(temp!=NULL){
            n++;
            temp=temp->next;
        }
        middle=n/2;
        temp=head;
        if(middle==0){
            head=NULL;
        }else{
        for(int i=0;i<middle;i++){
            prev=temp;
            temp=temp->next;
        }
        prev->next=temp->next;
        }
        return head;
    }
};