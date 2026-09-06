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
    ListNode* rotateRight(ListNode* head, int k) {
        int len=0;
        ListNode* temp;
        ListNode* p;
        ListNode* prev;
        temp=head;
        if(head==NULL || head->next==NULL){
            return head;
        }
        while(temp!=NULL){
            temp=temp->next;
            len++;
        }
        int h=k%len;
         for(int i=0;i<h;i++){
            temp=head;
            prev=NULL;
        while(temp->next!=NULL){
            prev=temp;
            temp=temp->next;
        }
        temp->next=head;
        prev->next=NULL;
        head=temp;
      }
      return head;
    }
};