#include <iostream>
#include<bits/stdc++.h>
#include <string.h>
using namespace std; 

class Solution {
	private:
    unordered_map<char, int> symbolValues = {
    	{'I',1},
    	{'V',5},
    	{'X',10},
    	{'L',50},
    	{'C',100},
    	{'D',500},
    	{'M',1000},
		};
	public:
	    int romanToInt(string s) {
	    	int x=s.length();
			
	    	int p=0;
	    	for(int i=0;i<x;i++)
	    	{
	    		int value=symbolValues[s[i]];
				
		    	if(i<x-1&&value<symbolValues[s[i+1]])
		    	{
		    		p-=value;	
				}
				else{
					p+=value;
				}
			}
			
			return p;
	}
	};
int  main()
{
	string o="MCMXCIV";
	
	Solution y;
	y.romanToInt(o);
	
	//Solution.romanToInt(o);
	return 0;
}
