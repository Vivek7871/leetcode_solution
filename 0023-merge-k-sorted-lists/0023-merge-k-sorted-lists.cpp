class Solution {
public:
    struct compare {
        bool operator()(ListNode* a, ListNode* b) {
            return a->val > b->val;  // Min heap
        }
    };

    ListNode* mergeKLists(vector<ListNode*>& lists) {
        priority_queue<ListNode*, vector<ListNode*>, compare> minHeap;

        // Step 1: Put all head nodes into heap
        for (auto node : lists) {
            if (node) minHeap.push(node);
        }

        ListNode dummy(0);
        ListNode* tail = &dummy;

        // Step 2: Extract min and push next
        while (!minHeap.empty()) {
            ListNode* minNode = minHeap.top();
            minHeap.pop();

            tail->next = minNode;
            tail = tail->next;

            if (minNode->next) {
                minHeap.push(minNode->next);
            }
        }

        return dummy.next;
    }
};
