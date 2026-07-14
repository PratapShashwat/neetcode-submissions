/*
// Definition for a Node.
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
*/

class Solution {
public:
unordered_map<Node*,Node*> map;
    Node* copyRandomList(Node* head) {
        Node* temp=head;
        Node* headd=new Node(0);
        Node* copy=headd;
        while(temp){
            copy->val=temp->val;
            map[temp]=copy;
            if(temp->next)copy->next=new Node(0);
            temp=temp->next;
            copy=copy->next;
        }
        temp=head;
        if(!head)headd=nullptr;
        copy=headd;

        while(temp){
            copy->random=map[temp->random];
            copy=copy->next;
            temp=temp->next;
        }
        return headd;
    }
};
