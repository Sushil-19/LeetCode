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
    ListNode* swapPairs(ListNode* head) {
        ListNode *fakeHead = new ListNode(-1);
        fakeHead->next = head;
        ListNode *node = fakeHead;
        while (node!=NULL & node->next != NULL && node->next->next!= NULL){
            ListNode *first = node;
            ListNode *second = node->next;
            ListNode *third = node->next->next;
            first->next = third;
            second->next = third->next;
            third->next = second;
            node = second;
        }
        return fakeHead->next;
    }
};
