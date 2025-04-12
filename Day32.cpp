// Question 1 Remove Duplicates from Sorted List II
//  https://leetcode.com/problems/remove-duplicates-from-sorted-list-ii/description/


class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL || head->next==NULL) return head;
        ListNode* dummy=new ListNode(0);
        dummy->next=head;
        ListNode* prev=dummy;
        ListNode* current=dummy->next;
        while(current){
            if(current->next && current->val==current->next->val){
                while(current->next && current->val==current->next->val){
                    current=current->next;
                }
                prev->next=current->next;
               
            }
             else{
                    prev=prev->next;
                }
                current=current->next;
        }
        return dummy->next;
    }
};

// Question 2 Reverse Nodes in k-Group
https://leetcode.com/problems/reverse-nodes-in-k-group/description/

class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k){
        ListNode* node = head;
        int count = 0;
        while (node !=NULL && count < k) {
            node = node->next;
            count++;
        }
        if (count == k) {
            ListNode* prev = NULL;
            ListNode* curr = head;
            ListNode* next = NULL;
            int i = 0;
            while (i < k && curr !=NULL) {
                next = curr->next;
                curr->next = prev;
                prev = curr;
                curr = next;
                i++;
            }
            head->next = reverseKGroup(next, k);
            return prev;
        }
        return head;
    }
};
