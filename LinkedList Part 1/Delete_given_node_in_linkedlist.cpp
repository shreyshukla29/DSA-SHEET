#include <bits/stdc++.h>
using namespace std;
class Solution {
     struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
public:
    void deleteNode(ListNode* node) {
        
        ListNode *nextNode = node->next;
        
        node->val = nextNode->val;
       
        node->next = nextNode->next;
        //nextNode->next = nullptr;
       // delete(nextNode);
    }
};