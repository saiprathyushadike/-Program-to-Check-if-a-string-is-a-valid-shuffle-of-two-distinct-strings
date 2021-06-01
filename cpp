#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	string s,s1,s2,temp;
	int n,i,a,b,c;
	int count=1;
	cin>>s;
	cin>>s1;
	cin>>s2;
	a=s.length();
	 b=s1.length();
	 c=s2.length();
	if(a!=b+c)
	{
	    cout<<"no";
	    return 0;
	}
	else
	{
	  temp=s1+s2;
	  int find =s.find(temp);
	    if(find==1){
	        cout<<"yes";
	    }
        	 
	  else
	    cout<<"no";
	    
	}
	return 0;
	    
	}

