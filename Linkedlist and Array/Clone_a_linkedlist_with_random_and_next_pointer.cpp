#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;


class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};


class Solution {
public:
     Node* copyRandomList(Node* head) {
        if (!head)
            return nullptr;

        unordered_map<Node*, Node*> mp;

        Node* temp = new Node(-1);
        Node* newHead = temp;
        Node* traversal = head;

        // Copy the nodes without random pointers
        while (traversal) {
            Node* newNode = new Node(traversal->val);
            temp->next = newNode;
            temp = newNode;
            mp[traversal] = newNode;
            traversal = traversal->next;
        }

        // Copy the random pointers
        traversal = head;
        newHead = newHead->next;
        Node* p2= newHead;
        while (traversal) {
            if (traversal->random)
               p2->random = mp[traversal->random];
            traversal = traversal->next;
            p2 = p2->next;
        }

        return newHead;
    }

};