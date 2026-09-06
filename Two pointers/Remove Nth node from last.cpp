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
    ListNode* removeNthFromEnd(ListNode* head, int n) {

        if (head == NULL)
            return NULL;

        ListNode* temp = head;
        ListNode* prev = head;

        // Single node
        if (head->next == NULL)
            return NULL;

        // Move temp n nodes ahead
        for (int i = 0; i < n; i++) {
            temp = temp->next;
        }

        // If temp becomes NULL, remove head
        if (temp == NULL) {
            return head->next;
        }

        // Move both pointers
        while (temp->next != NULL) {
            prev = prev->next;
            temp = temp->next;
        }

        // Delete the nth node from the end
        prev->next = prev->next->next;

        return head;
    }
};