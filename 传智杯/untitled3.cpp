#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b;
	cin>>a>>b;
	if(a==1){
		if(b%2 == 0){
			cout<<"yukari";//TODO
		}
		else{cout<<"akai";}
	}
	else if(b==1){
		if(a%2 == 0){
			cout<<"yukari";//TODO
		}
		else{cout<<"akai";}
	}
	else{
		if(a*b%2==0){
				cout<<"yukari";
			//TODO
		}
		else{cout<<"akai";}
	}
	
	return 0;
}
