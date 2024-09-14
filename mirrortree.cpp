class Solution {
  public:
    // Function to convert a binary tree into its mirror tree.
    
        
        void mirror(Node* temp){
        if(temp==NULL)
        return;
        
        
        
         mirror(temp->right);
    
        mirror(temp->left);
       swap(temp->left, temp->right) ;
        
        
    }
    
};
