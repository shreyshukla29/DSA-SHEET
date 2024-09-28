
#include<bits./stdc++.h>
using namespace std;

  struct ListNode {
     int val;
     ListNode *next;
     ListNode(int x) : val(x), next(NULL) {}
  };
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if (!head || !head->next)
        return nullptr; // No cycle if there are less than two nodes

    ListNode *slow = head, *fast = head;

    // Detect cycle
    while (fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast)
            break; // Cycle detected
    }

    // If there is no cycle
    if (fast == nullptr || fast->next == nullptr)
        return nullptr;

    // Move slow to head, keep fast at meeting point, and move both at same pace until they meet.
    slow = head;
    while (slow != fast) {
        slow = slow->next;
        fast = fast->next;
    }
    return slow; 
    }
};