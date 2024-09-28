#include<bits/stdc++.h>
#include<unordered_map>
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

int lenght(ListNode* head){
    if(head == NULL) return 0; 
    int length=0;
    ListNode* temp=head;
    while(temp){
        temp=temp->next;
        length++;

    }
    return length;
}
    ListNode* rotateRight(ListNode* head, int k) {
        
        cout<<k<<endl;
        if(head ==NULL || head->next==NULL || k==0) return head;
        ListNode* p1 =head;
        ListNode* p2 =head;
        int l = lenght(head);
        cout<<l<<endl;
         k = k%l;
         if(k==0) return head;
        while(k>0){
            p2 = p2->next;
            k--;
        }
        if(p2->next)

        while(p2->next){
            p1=p1->next;
            p2=p2->next;
        }
        ListNode* temp = p1->next;
        p1->next =NULL;
        p2->next =head;
        return temp;

        
    }
};