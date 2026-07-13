/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
public:
    bool hasCycle(ListNode* head) {
        ListNode* t1=head;
        ListNode* t2=head;
        while(true){
            if(t1==nullptr)return false;
            
            t1=t1->next;
            if(t1==nullptr)return false;
            t1=t1->next;
            t2=t2->next;
            if(t1==t2)return true;
        }
        return false;
    }
};
