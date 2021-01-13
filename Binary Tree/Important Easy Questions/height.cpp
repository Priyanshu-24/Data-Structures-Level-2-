//height or maximum depth of a tree

int height(Node* root)
{
	if(root==NULL)
		return 0;

	return 1 + max(height(root->left), height(root->right));
}