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
    ListNode* deleteDuplicates(ListNode* head) {
        if (head == nullptr)
            return head;
        ListNode *n_head = new ListNode(head->val);
        ListNode *curr = head;
        ListNode *prev = n_head;
        while (curr->next != nullptr) {
            if (curr->val != curr->next->val) {
                ListNode *n_node = new ListNode(curr->next->val);
                prev->next = n_node;
                prev = n_node;
            }
            curr = curr->next;
        }

        return n_head;
    }
};
