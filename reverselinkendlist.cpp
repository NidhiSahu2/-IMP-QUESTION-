class Solution {
  public:
    // Function to reverse a linked list.
    struct Node* reverseList(struct Node* head, Node* temp =nullptr) {
        // code here
        // return head of reversed list
  while(head!=nullptr)
  {
      temp= head->next;
      head->next= nullptr;
      temp = head;
      head= temp;
  }
    return temp;    
    }
};
