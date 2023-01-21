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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* dummyHead = new ListNode(0);
        ListNode* curr = dummyHead;
        int carry = 0;
        while (l1 != NULL || l2 != NULL || carry != 0) {
            int list1Val;
            int list2Val;
            
            if(l1 != nullptr)
            {
                list1Val = l1->val;
            }else
            {
                list1Val = 0;
            }
            
            if(l2 != nullptr)
            {
                list2Val = l2->val;
            }else
            {
                list2Val = 0;
            }
            
            int sum = carry + list1Val + list2Val;
            carry = sum / 10;
            curr->next = new ListNode(sum % 10);
            curr = curr->next;
            
            if(l1 != nullptr)
            {
                l1 = l1->next;
            }else
            {
                l1 = nullptr;
            }
            
            if(l2 != nullptr)
            {
                l2 = l2->next;
            }else
            {
                l2 = nullptr;
            }
        }
        return dummyHead->next;
    }
};