//to insert data in BST, returns address of root node
BstNode* Insert (BstNode* root, int data)
{
  if (root ==NULL)
  {//empty tree
    root = GetNewNode(data);
  }
  //if data to be inserted is lesser, insert in left subtree
  else if(data<root->data)
  {
    root->left = Insert (root->right, data);
  }
  else
  {
    root->right = Insert(root->right, data);
  }
  return root;
}
// add one line commit
/*
