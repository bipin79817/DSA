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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        // ListNode* temp1=headA;
        // ListNode* temp2=headB;
//         map<ListNode*, int> mp;
//         while(temp1!=NULL){
//             mp[temp1]=1;
//             temp1=temp1->next;
//         }
        
//         while(temp2!=NULL){
//         if(mp.find(temp2)!=mp.end()){
//             return temp2;
//         }
//         temp2=temp2->next;
//         }
//         return nullptr;
        
        //METHOD 2
        
//         ListNode* temp1=headA;
//         ListNode* temp2=headB;
        
//         int cnt1=1,cnt2=1;
        
//         if (!headA || !headB) return nullptr;
        
//         while(temp1->next!=NULL){
//             cnt1++;
//             temp1=temp1->next;
//         }
//         while(temp2->next!=nullptr){
//             cnt2++;
//             temp2=temp2->next;
//         }
        
        
//         temp1=headA;
//         temp2=headB;
        
//         if(cnt1>cnt2){
//             for(int i=0; i<cnt1-cnt2; i++){
//                 temp1=temp1->next;
//             }
//         }else{
//             for(int i=0; i<cnt2-cnt1; i++){
//                 temp2=temp2->next;
//             }
//         }
//         while(temp1!=nullptr || temp2!=nullptr){
//             if(temp1==temp2){
//                 return temp2;
//             }
//             temp1=temp1->next;
//             temp2=temp2->next;
//         }
//         return nullptr;
        
        // METHODE 3
        
        
        if(headA == NULL || headB == NULL){
            return NULL;
        }
        
        ListNode* temp1=headA;
        ListNode* temp2=headB;
        
        
        
        while(temp1!=temp2){
            temp1=temp1->next;
            temp2=temp2->next;
            
            if(temp1==temp2){
                return temp1;
            }
            
            if(temp1==nullptr){
                temp1=headB;
            }
            if(temp2==nullptr){
                temp2=headA;
            }
            
        }
        return temp1;
    }
};