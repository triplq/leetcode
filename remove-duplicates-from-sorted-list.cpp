class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode *res = head;
        while (head != nullptr && head->next != nullptr) {
            if (head->val == head->next->val) {
                head->next = head->next->next;
            }
            else {
                head = head->next;
            }
        }

        return res;
    }
}
