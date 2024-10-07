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
    ListNode* reverseKGroup(ListNode* head, int k) {
        if (head == nullptr || head->next == nullptr || k <= 1) {
            return head;
        }

        // Count the number of nodes in the list
        ListNode* temp = head;
        int count = 0;
        while (temp != nullptr) {
            count++;
            temp = temp->next;
        }

        // If the list has fewer nodes than k, return the original head
        if (count < k) {
            return head;
        }

        // Reverse first k nodes
        ListNode* prev = nullptr;
        ListNode* curr = head;
        ListNode* next = nullptr;
        int nodesToReverse = k;

        while (curr != nullptr && nodesToReverse > 0) {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
            nodesToReverse--;
        }

        // After reversing, next points to (k+1)th node
        // Recursively reverse the rest of the list and link it back
        if (next != nullptr) {
            // head->next uses as the next node are put into front of the head
            head->next = reverseKGroup(next, k);
        }

        // Return the new head after reversal as prev become at last but due to reverse it come on to first place so we return the prev
        return prev;
    }
};
