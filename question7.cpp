#include<cstdio>
#include<algorithm>
using namespace std;
const int maxn=100000;
int list[maxn]={0};
int main(){
	int n;
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		scanf("%d", &list[i]);
	}
	long long ans=0;
	sort(list, list+n);
	for(int i=0; i<n; i++){
		ans+=(list[i]-list[0]);
	}
	printf("%lld",ans);
	return 0;
}
