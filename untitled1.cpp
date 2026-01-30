#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
	int n,t,sum = 0,k=1;
    char m;
	cin>>n;
	t= sqrt(n)+1;
	for(int i = 0 ;i<=t;i++)
	{
		for(int j = 0;j<=i;j++)
			cout<<" ";
		{
			for(int j=2;j<=i;j++)
			{
				printf("%c",&m);
			}
		}
	}
			
			
	
return 0;
}
