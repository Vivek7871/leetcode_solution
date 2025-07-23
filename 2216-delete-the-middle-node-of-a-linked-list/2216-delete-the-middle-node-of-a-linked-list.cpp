class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        // Edge case: only one node
        if (head == nullptr || head->next == nullptr) {
            return nullptr;
        }

        ListNode* slow = head;
        ListNode* fast = head;
        ListNode* prev = nullptr;

        // Move slow by 1 and fast by 2
        while (fast != nullptr && fast->next != nullptr) {
            prev = slow;
            slow = slow->next;
            fast = fast->next->next;
        }

        // Delete the middle node
        prev->next = slow->next;
        delete slow;

        return head;
    }
};
