#include<bits/stdc++.h>
using namespace std;
int counta(const string& s){
	int count=0;
	int length=s.length();
	for(int i=0;i<length-2;i++){
		if(s[i] != s[i+2]&&s[i+1]==s[i+2]){
			++count;//TODO
		}
		//TODO
	}
	return count;
}
int main()
{
	long long n,res=0;
	long long cnt[26]={0},dp[26]={0};
	scanf("%lld",&n);
	getchar();
	char *s=(char*)malloc(n+1);
	gets(s);
	for(int i=0;i<n;i++){
		res+=dp[s[i]-'a'];
		dp[s[i]-'a']+=i-cnt[s[i]-'a'];
		++cnt[s[i]-'a'];//TODO
	}
	printf("%lld",res);
	free(s);
	return 0;
}


