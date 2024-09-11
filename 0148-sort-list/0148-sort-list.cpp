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
    ListNode* findMiddle(ListNode* head){
        ListNode* slow=head;
        ListNode* fast=head->next;
        
        while(fast!=NULL && fast->next!=nullptr){
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow;
    }
    
    ListNode* MergeTwoLinkedList(ListNode* list1, ListNode* list2){
        ListNode* third;
        ListNode* last;
        ListNode* first=list1;
        ListNode* second=list2;
        
        if(first->val < second->val){
            third=last=first;
            first=first->next;
            last->next=NULL;
        }else{
            third=last=second;
            second=second->next;
            last->next=NULL;
        }
        
        while(first!=NULL && second!=NULL){
            if(first->val < second->val){
                last->next=first;
                last=first;
                first=first->next;
                last->next=NULL;
            }else{
                last->next=second;
                last=second;
                second=second->next;
                last->next=NULL;
            }
        }
        if(first!=NULL){
            last->next=first;
        }else{
            last->next=second;
        }
        return third;
    }
    
    ListNode* sortList(ListNode* head) {
        if(head==NULL || head->next==nullptr){
            return head;
        }
        
        ListNode* middle=findMiddle(head);
        ListNode* right=middle->next;
        middle->next=nullptr;
        ListNode* left=head;
        right=sortList(right);
        left=sortList(left);
        return MergeTwoLinkedList(left, right);
        
    }
};