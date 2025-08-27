class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        ListNode* dummy = new ListNode(0, head);
        ListNode* prev = dummy;

        while (prev->next && prev->next->next) {
            ListNode* first = prev->next;
            ListNode* second = prev->next->next;

            first->next = second->next;
            second->next = first;
            prev->next = second;

            prev = first;
        }
        return dummy->next;
    }
};
