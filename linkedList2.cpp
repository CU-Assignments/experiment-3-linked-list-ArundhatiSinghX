class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* current = head;

        while (current != nullptr && current->next != nullptr) {
            if (current->val == current->next->val) {
                ListNode* duplicateNode = current->next;
                current->next = current->next->next;
                delete duplicateNode;
            } else {
                current = current->next;
            }
        }

        return head;
    }
};