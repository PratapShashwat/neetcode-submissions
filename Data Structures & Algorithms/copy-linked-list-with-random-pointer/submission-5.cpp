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

    Node* copyRandomList(Node* head) {
        unordered_map<Node*,Node*> m;
m[nullptr]=nullptr;
Node* cur=head;
        while(cur){
            if(m.find(cur)==m.end()){
                m[cur]=new Node(0);
            }
            m[cur]->val=cur->val;
            if(m.find(cur->next)==m.end()){
                m[cur->next]=new Node(0);
            }
            m[cur]->next=m[cur->next];
            if(m.find(cur->random)==m.end()){
                m[cur->random]=new Node(0);
            }
            m[cur]->random=m[cur->random];
            cur=cur->next;
        }
        return m[head];
    }
};
