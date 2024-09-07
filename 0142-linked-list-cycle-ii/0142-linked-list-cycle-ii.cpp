/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* cycle(ListNode* head, ListNode* p){
       ListNode* start = head;
                while (start != p) {
                    start = start->next;
                    p = p->next;
                }
                return start;  
    }    
    
    ListNode *detectCycle(ListNode *head) {
        if(head==nullptr || head->next==nullptr){
            return nullptr;
        }
        
      ListNode* p=head;
      ListNode* q=head;
        
      while(q!=nullptr && q->next!=nullptr){
          p=p->next;
          q=q->next->next;
          if(p==q){
             return cycle(head, p); 
          }
      }
        return nullptr;
 }
};