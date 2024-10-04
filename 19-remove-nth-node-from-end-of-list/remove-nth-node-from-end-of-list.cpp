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
        ListNode* start = new ListNode();
        start->next = head;
        ListNode* fast = start;
        ListNode* slow = start;

        for (int i = 0; i < n; i++) {
            fast = fast->next;
        }

        while (fast->next != NULL) {
            fast = fast->next;
            slow = slow->next;
        }
        ListNode* node_to_delete = slow->next;
        slow->next = slow->next->next;
        delete node_to_delete;

        return start->next;
    }
};