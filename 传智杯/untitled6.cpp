#include<bits/stdc++.h>
using namespace std;
int n;
int min1 = INT_MAX;
int* arr;
int* rec;
int ispr(int k) {
	int i = 0;
	for (int i = 2; i <= sqrt(k); i++) {
		//TODO
		if (k % i == 0)
			return 0;
	}
	return 1;
}
void dfs(int* arr, int* rec, int index, int sum) {
	int i, j;
	if (index == n) {
		if (sum < min1)
			min1 = sum;
		return;
	}
	for(i = 2;i<=arr[index];i++){
		if(arr[index]%i==0 &&ispr(i)){
			int flag=0;
			for(j=0;j<index;j++){
				if(i==rec[j]){
					flag=1;
					break;
				}
			}
			if(flag){
				flag=0;
				continue;
			}else{
				rec[index]=i;
				dfs(arr,rec,index+1,sum+i);
				rec[index]=0;
			}
		}
	}
}
int main(){
	int i;
	scanf("%d",&n);
	arr = (int*)malloc(sizeof(int)*n);
	rec = (int*)malloc(sizeof(int)*n);
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	dfs(arr,rec,0,0);
	if(min1<INT_MAX)
		printf("%d",min1);
	else
		printf("%d",-1);
	free(arr);
	free(rec);
}
