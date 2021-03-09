Node* mirrorTree(Node* root)
{
    if (root == NULL)
        return root;
     
    Node* temp = root->left;
    root->left = root->right;
    root->right = temp;
 
    if (root->left)
        mirrorTree(root->left);
    if (root->right)
        mirrorTree(root->right);
   
  return root;
}
