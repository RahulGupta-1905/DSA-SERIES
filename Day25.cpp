// Question 1 Delete Node in a Linked List
https://leetcode.com/problems/delete-node-in-a-linked-list/

class Solution {
public:
    void deleteNode(ListNode* target) {
        target->val=target->next->val;
        target->next=target->next->next;
    }
};

T.C(1)
S.C(1)

// Question 2 Linked List Insertion At End
https://bit.ly/3w9pEIt

class Solution {
  public:
    Node *insertAtEnd(Node *head, int x) {
        Node* temp=head;
        Node* newNode=new Node(x);
        if(head==NULL){
            return newNode;
        }
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=newNode;
        newNode->next=NULL;
        return head;
    }
};
T.C(N)
S.C(1)
