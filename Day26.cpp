// Question 1


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
