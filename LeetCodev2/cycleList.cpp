/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if (!head) return false;
        
        ListNode* slow = head;
        ListNode* fast = head->next;
        
        if (!fast) return false;
        
        
        while(slow && fast) {
            if (slow == fast) return true;
            
            slow = slow->next;
            
            if (fast->next) {
                fast = fast->next->next;
            } else {
                fast = fast->next;
            }
        }
        
        return false;
    }
};