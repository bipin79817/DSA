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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==nullptr || head->next==nullptr || k==0){
            return head;
        }
        ListNode* temp=head;
        int count=1;
        while(temp->next!=nullptr){
            temp=temp->next;
            count++;
        }
        temp->next=head;
        
        k=k%count;
        int newheadcnt=count-k;
        
        temp=head;
        for(int i=1;i<newheadcnt;i++){
            temp=temp->next;
        }
        ListNode* newHead=temp->next;
        temp->next=nullptr;
        
        return newHead;
    }
};