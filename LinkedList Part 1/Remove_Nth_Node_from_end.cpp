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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
      ListNode* head1=head;
      ListNode* p1=head;
      ListNode* p2=head;
      ListNode* p3=NULL;
      while(n--){
          p2=p2->next;
      }  
      while(p2!=NULL){
          p3=p1;
          p1=p1->next;
          p2=p2->next;
      }
      if(p3==NULL){
          head1=head->next;
          delete head;
          return head1;
      }
     
      p3->next=p1->next;
      delete p1;
      return head1;
    }
};