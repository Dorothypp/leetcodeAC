#include<bits/stdc++.h>
using namespace std; 
class Solution {
public:
    int search(vector<int>& nums, int target) {
		
		int left=0;//l=0
		int s=nums.size();
		int right=s-1;//r=5
		int middle=(right+left)/2;//m=2
		while(left<=right)//0<5 3<5
		{
			if(target<nums[middle])//5<6
			{
				right=middle-1;//r=3
				middle=(right+left)/2;//m=3;
				
			}
			else if(target>nums[middle])//5>3
			{
				left=middle+1;//l=3
				middle=(right+left)/2;//m=4
			}
			else
			{
				return middle;
			}
		}
		
		
    }
	return -1;
};
int main()
{
	int tar=5;
	vector<int> sea={1,2,3,5,6,7};
	Solution a;
	
	a.search(sea,tar);
	
}
