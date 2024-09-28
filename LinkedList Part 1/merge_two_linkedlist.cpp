#include <bits/stdc++.h>
using namespace std;

 struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* head1, ListNode* head2) {
        ListNode* dummyhead= new ListNode(-1);
    ListNode* ptr1=head1;
    ListNode* ptr2=head2;
    ListNode* ptr3=dummyhead;
    while(ptr1 && ptr2){
        if(ptr1->val >=ptr2->val){
            ptr3->next=ptr2;
            ptr2=ptr2->next;
        }else{
            ptr3->next=ptr1;
            ptr1=ptr1->next;
        }ptr3=ptr3->next;
    }
    if(ptr1){
        ptr3->next=ptr1;
    }else{
        ptr3->next=ptr2;
    }
    return dummyhead->next;
    }
};