#include<stdio.h>
#include <cmath>
#include<bits/stdc++.h>

using namespace std;
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
    	
	
		int count=strs.size();//�ַ������� 
		if(!count)
    	{
    		return "";
		}
		string first=strs[0];
		for(int i=1;i<count;i++)
		{
			first=longestCommonPrefix(first,strs[i]);
			if(!first.size())
			{
				break;
			 } 
		}
		return first;
    }
    string longestCommonPrefix(const string str1,const string str2)//���Բ���const? 
    {
    	int len=min(str1.size(),str2.size());
    	int ind=0;
		while(str1[ind]==str2[ind]&&ind<len)
		{
			ind++;
		}
		return str1.substr(0,ind);
	}
};
