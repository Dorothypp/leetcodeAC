#include<bits/stdc++.h>
using namespace std;
class solution{
	public:
		int op(vector<int>& nums,int val){
			int slow=0;
			for(int fast=0;fast<nums.size();fast++)
			{
				if(nums[fast]!=val)
				{
					nums[slow]=nums[fast];
					slow++;
				}
				  
			}
			return slow;	
		}
}; 
int main()
{
	vector<int> num={1,2,3,3,5,6};
	int m=3;
	solution a;
	cout<<a.op(num,m)<<endl;
	return 0;
}
