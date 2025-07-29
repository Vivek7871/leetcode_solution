class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        // Step 1: Create a dummy node
        ListNode* dummy = new ListNode(0);
        dummy->next = head;

        // Step 2: Initialize two pointers
        ListNode* fast = dummy;
        ListNode* slow = dummy;

        // Step 3: Move fast pointer n steps ahead
        for (int i = 0; i < n; ++i) {
            fast = fast->next;
        }

        // Step 4: Move both pointers until fast reaches the last node
        while (fast->next != nullptr) {
            fast = fast->next;
            slow = slow->next;
        }

        // Step 5: Skip the target node
        ListNode* toDelete = slow->next;
        slow->next = slow->next->next;
        delete toDelete; // Free memory

        return dummy->next;
    }
};
