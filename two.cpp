Node* mirrorTree(Node* root)
{
    if (root == NULL)
        return root;
     
    
     if (root->left)
        mirrorTree(root->left);
    if (root->right)
        mirrorTree(root->right);
    
    Node* temp = root->left;
    root->left = root->right;
    root->right = temp;
 
  return root;
}
