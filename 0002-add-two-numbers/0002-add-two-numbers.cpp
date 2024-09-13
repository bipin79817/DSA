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
        ListNode* dummy=new ListNode(0);
        ListNode* temp1=l1;
        ListNode* temp2=l2;
        ListNode* curr=dummy;
        int carry=0,val1,val2;
        
        while(temp1!=nullptr || temp2!=nullptr ){
            
        // for getting the value of the linked list 1
            
            if(temp1!=nullptr){
                 val1=temp1->val;
            }else{
               val1= 0;
            }
            
        // for getting the value of the linked list 2
            
            if(temp2!=nullptr){
                 val2=temp2->val;
            }else{
                val2= 0;
            }
            
            int sum = val1 + val2 + carry;
            carry = sum/10; 
            curr->next = new ListNode(sum % 10);
            
            curr=curr->next;
            
            if(temp1 != nullptr){temp1=temp1->next;}
            if(temp2 != nullptr){temp2=temp2->next;}
       }
        // If there is any remaining carry, create a new node
        
        if(carry>0){
            curr->next=new ListNode(carry);
        }
        
        return dummy->next;
    }
};