class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {

        if(head == NULL)
            return NULL;

        ListNode* temp = head;
        ListNode* prev = head;

        if(head->next == NULL) {
            return NULL;
        }

        for(int i = 0; i < n; i++) {
            temp = temp->next;
        }

        if(temp == NULL) {
            return head->next;
        }

        while(temp->next != NULL) {
            prev = prev->next;
            temp = temp->next;
        }

        if(n == 1)
            prev->next = NULL;
        else
            prev->next = temp;

        return head;
    }
};