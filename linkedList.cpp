class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        if (head == nullptr || head->next == nullptr) {
            return nullptr;
        }

        int length = 0;
        ListNode* temp = head;
        while (temp != nullptr) {
            length++;
            temp = temp->next;
        }

        int middleIndex = length / 2;

        ListNode* prev = nullptr;
        ListNode* current = head;
        for (int i = 0; i < middleIndex; i++) {
            prev = current;
            current = current->next;
        }

        prev->next = current->next;

        return head;
    }
};