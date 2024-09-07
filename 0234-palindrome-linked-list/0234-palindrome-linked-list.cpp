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
    bool isPalindrome(ListNode* head) {
        if(head==nullptr || head->next==nullptr){
            return 1;
        }
        
 // find the middle
        
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast!=nullptr && fast->next!=nullptr ){
            slow=slow->next;
            fast=fast->next->next;
        }
        
 // reverse the second half
    
        ListNode* prev=nullptr;
        ListNode* curr=slow;
        ListNode* next;
        
        while(curr!=nullptr){
            next=curr->next;
            curr->next=prev;
            
            
            prev=curr;
            curr=next;
        }
    
// compare the both half
    
        ListNode* fhalf=head;
        ListNode*shalf=prev;
        
        while(shalf!=nullptr){
             if(fhalf->val!=shalf->val){
                  return 0;
             }
              fhalf=fhalf->next;
              shalf=shalf->next;
          }
           return 1;
      }
};