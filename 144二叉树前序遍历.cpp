class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) 
	{
		vector<int> result;
		traversal(root,result);
		return result;
    }
    void traversal(TreeNode* cur,vector<int>& var)//二叉树结点指针， 空容器，取地址，这样形参可以直接引用实参的值？
	{
		if(cur==NULL) return;
		var.push_back(cur->val);
		traversal(cur->left,var);
		traversal(cur->right,var);
	 } 
};
