class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if (!head || !head->next || k == 0) return head;

        // Step 1: Find length and make list circular
        ListNode* temp = head;
        int length = 1;
        while (temp->next) {
            temp = temp->next;
            length++;
        }
        temp->next = head; // circle the list

        // Step 2: Find new head and tail
        k = k % length;
        int stepsToNewHead = length - k;
        temp = head;
        for (int i = 1; i < stepsToNewHead; i++) {
            temp = temp->next;
        }

        // Step 3: Break the circle
        ListNode* newHead = temp->next;
        temp->next = nullptr;

        return newHead;
    }
};
