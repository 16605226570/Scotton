#include<cstdio>
#include<map>
#include<algorithm>
using namespace std;
const int maxn=1010;
int n,list[maxn]={0};
map<int , int>cnt1,cnt2;
int main(){
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		scanf("%d", &list[i]);
		cnt1[list[i]]++;
	}
	int ans=0;
	for(int i=0; i<n; i++){
		for(int j=i+1; j<n; j++){
			cnt2[list[i]+list[j]]++;
		}
	}
	for(int i=0; i<n; i++){
		for(int j=i+1; j<n; j++){
			if(list[i]!=list[j])
				ans+=cnt2[list[i]+list[j]]-cnt1[list[i]]-cnt1[list[j]]+1;
			else
				ans+=cnt2[list[i]+list[j]]-cnt1[list[i]]-cnt1[list[j]]+3;
		}
	}
	printf("%d", ans);
	return 0;
}
