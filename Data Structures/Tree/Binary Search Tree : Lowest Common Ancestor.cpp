    Node *lca(Node *root, int v1,int v2) {
		// Write your code here.
      
    if (root == NULL || root->data== v1 || root->data== v2)
    return root;

   Node* left = lca(root->left,v1,v2);
    if(left && left->data != v1 && left->data != v2)
            return left;
    Node* right = lca(root->right,v1,v2);

    if(left && right)
    return root;

    if(!left)
    return right;
    else
    return left;
        
        
    }
