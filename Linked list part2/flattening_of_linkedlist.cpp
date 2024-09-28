#include<bits./stdc++.h>
using namespace std;

struct Node{
	int data;
	struct Node * next;
	struct Node * bottom;
	
	Node(int x){
	    data = x;
	    next = NULL;
	    bottom = NULL;
	}
};

  Node *merge(Node *head1 , Node *head2){
        Node *temp =new Node(-1);
        Node *res =temp;
        while(head1 && head2){
            if(head1->data > head2->data){
                temp->bottom = head2;
                head2 = head2->bottom;
                
            }else{
                temp->bottom =head1;
                
                head1 = head1->bottom;
            }
            temp =temp->bottom;
        }
        if(head1){
            temp->bottom =head1;
        }if(head2){
            temp->bottom =head2;
        }
        return res->bottom;
        
    }
    
Node *flatten(Node *root)
{
   // Your code here
   if(root == NULL || root->next ==NULL){
       return root;
   }
   root->next =flatten(root->next);
   root = merge(root,root->next);
   
   
   return root;
}
