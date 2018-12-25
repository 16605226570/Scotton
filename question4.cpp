#include<cstdio>
#include<algorithm>
using namespace std;
const int maxn=100010;
int list[maxn]={0};
int main(){
	int n;
	scanf("%d", &n);
	int a=0, b=0, c=0, ans=0;
	for(int i=0; i<n; i++){
		scanf("%d", &list[i]);
		if(list[i]==3)
			c++;
	}
	for(int i=0; i<n; i++){
		if(list[i]==1)
			a++;
		if(list[i]==3)
			c--;
		if(list[i]==2)
			ans+=a*c;
	}
	printf("%d", ans);
	return 0;
}
