// Question 1 Remove Linked List Elements
// https://leetcode.com/problems/remove-linked-list-elements/

class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        if(head==NULL) return head;
        else if(head->next==NULL && head->val==val) return NULL;
        else if(head->next==NULL && head->val!=val) return head;
        ListNode* dummy=new ListNode(0);
        dummy->next=head;
        ListNode* prev=dummy;
        ListNode* temp=dummy->next;
        while(temp){
            if(temp->val==val){
                prev->next=temp->next;
            }
            else{
                prev=temp;
            }
            temp=temp->next;
 
        }
        return dummy->next;
    }
};
// T.C(N)
// S.C(1)

// Question 2 Add two numbers
// https://leetcode.com/problems/add-two-numbers/

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry = 0;
        ListNode* head = NULL;
        ListNode* tail = NULL;
        while(l1!=NULL || l2!=NULL|| carry!=NULL){
            int sum = carry;
            if (l1) {
                sum += l1->val;
                l1 = l1->next;
            }
            if(l2){
                sum += l2->val;
                l2 = l2->next;
            }
            ListNode* newNode = new ListNode(sum % 10);
            carry = sum / 10;

            if(!head){
                head = tail = newNode;
            } 
            else{
                tail->next = newNode;
                tail = newNode;
            }
        }
        return head;
    }
};
