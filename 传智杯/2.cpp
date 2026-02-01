#include <iostream>
#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;
int main() {
	int n;
	cin>>n;
	vector<int> numbers(n);
	for(int i=0;i<n;i++){
		cin>>numbers[i];//TODO
	}
	sort(numbers.begin(),numbers.end());
	int mind=INT_MAX;
	for(int i=0;i<n-1;++i)
	{
		int d=numbers[i+1]-numbers[i];
		mind=min(mind,d);
	}
	cout<<mind<<endl;
	return 0;
}
