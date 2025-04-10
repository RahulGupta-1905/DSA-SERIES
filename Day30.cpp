// Question 1 Sort List
// https://leetcode.com/problems/sort-list/
class Solution {
public:
    ListNode *merge(ListNode *a,ListNode *b){
         ListNode *c=new ListNode(100);
        ListNode *temp=c;
        while(a!=NULL & b!=NULL){
            if(a->val<=b->val){
                temp->next=a;
                a=a->next;
                temp=temp->next;
            }
            else{
                temp->next=b;
                b=b->next;
                temp=temp->next;
            }
        }
        if(a==NULL){
            temp->next=b;
        }
        else{
            temp->next=a;
        }
        return c->next;
    }
    ListNode* sortList(ListNode* head) {
       if(head==NULL || head->next==NULL) return head; 
       ListNode *fast=head;
       ListNode *slow=head;
       while(fast->next!=NULL && fast->next->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
       }
       ListNode *a=head;
       ListNode *b=slow->next;
       slow->next=NULL;
       a=sortList(a);
       b=sortList(b);
       ListNode *c=merge(a,b);
       return c;

    }
};

//T.C(nlogn)
//S.C(logn)

// Question 2 Remove Nth Node from End
//  https://leetcode.com/problems/remove-nth-node-from-end-of-list/
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *temp=head;
        int len=0;
        while(temp!=NULL){
            len++;
            temp=temp->next;
        }
        if(n==len){
            head=head->next;
            return head;
        }
        int k=len-n+1;
        int idx=k-1;
        temp=head;
        for(int i=1;i<idx;i++){
            temp=temp->next;
        }
        temp->next=temp->next->next;
        return head;
    }
};
//T.C(n)
//S.C(1)
