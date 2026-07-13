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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode dummy;
        ListNode* test = &dummy;
        
        while(list1 && list2){
            if(list1->val<list2->val){
                test->next=list1;
                list1=list1->next;
            }
            else {test->next=list2;
            list2=list2->next;}
            test=test->next;
        }
        test->next=(list2==nullptr?list1:list2);
        return dummy.next;
    }
};
