#include "ListNode.h"

bool hasCycle(ListNode *head) {
    /* Fist Solution: two pointers, one fast one slow
     * if they came cross, means that it has cycle
     * Time Complexity: O(N), Space Complexity: O(1)
     */
    ListNode *slow = head, *fast = head;
    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
        if (fast == slow)
            return true;
    }
    return false;
    
    /* Second Solution: 
     * use hash map, unordered_map<int, bool> visited
     * Time Complexity O(N), Space Complexity O(1)
    */
}
