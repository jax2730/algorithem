#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int num;
	cin>>num;
	double n1,p1,n2,p2,n3,p3;
	cin>>n1>>p1>>n2>>p2>>n3>>p3;
	int lest;
	n1 =ceil(num/n1) ;
	n2 =ceil(num/n2);
	n3 =ceil(num/n3);
    p1 = n1 *p1;
	p2 = n2 *p2;
	p3 = n3*p3;
	if(p1<p2)
		lest = p1;
	else 
		lest = p2;
	if(p3<lest)
		lest = p3;
	cout<<int(lest)<<endl;
	
	
	
	

	
	return 0;
}

