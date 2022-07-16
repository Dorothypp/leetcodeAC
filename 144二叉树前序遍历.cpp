class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) 
	{
		vector<int> result;
		traversal(root,result);
		return result;
    }
    void traversal(TreeNode* cur,vector<int>& var)//���������ָ�룬 ��������ȡ��ַ�������βο���ֱ������ʵ�ε�ֵ��
	{
		if(cur==NULL) return;
		var.push_back(cur->val);
		traversal(cur->left,var);
		traversal(cur->right,var);
	 } 
};
