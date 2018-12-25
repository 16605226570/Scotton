#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
const int maxn=100010;
int list[maxn]={0};
int maxNum[maxn]={0};
bool visit[maxn]={false};
int main(){
	int n,ans=0;
	scanf("%d", &n);
	for(int i=1; i<=n; i++){
		scanf("%d", &list[i]);
	}
	for(int i=1; i<=n; i++){
		int k=list[i];
		maxNum[i]=0;
		memset(visit, false, sizeof(visit));
		while(!visit[k]){
			visit[k]=true;
			k=list[k];
			maxNum[i]++;
		}
		if(ans<maxNum[i])
			ans=maxNum[i];
	}
	printf("%d",ans);
	return 0;
}
