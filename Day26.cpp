// Question 1 Doubly linked list Insertion at given position
//https://bit.ly/3QD4hHs
class Solution {
  public:
    Node *addNode(Node *head, int pos, int data) {
        Node* t = new Node(data);
        if (head == NULL) return t;

        Node* temp = head;
        for (int i = 0; i < pos && temp->next != NULL; i++) {
            temp = temp->next;
        }

        t->next = temp->next;
        t->prev = temp;
        temp->next = t;

        if (t->next != NULL) {
            t->next->prev = t;
        }

        return head;
    }
};
// T.C(N)
// S.C(1)
// Question 2 Search in Linked List
//https://bit.ly/3Epriup
class Solution {
  public:
    // Function to count nodes of a linked list.
    bool searchKey(int n, Node* head, int key) {
        Node* temp=head;
        while(temp){
            if(temp->data==key){
                return true;
            }
            temp=temp->next;
        }
        return false;
    }
};

T.C(N)
 S.C(1) 
