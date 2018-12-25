#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
const int maxn = 110;
int n;
int list[maxn] = { 0 };
int maxNum[maxn] = { 0 };
bool visit[maxn] = { false };
bool judge(){
	int flag = true;
	for (int i = 0; i < n; i++){
		if (!visit[i])
			flag = false;
	}
	return flag;
}
int main(){
	
	scanf("%d", &n);
	for (int i = 0; i<n; i++){
		scanf("%d", &list[i]);
	}
	int ans = 0;
	for (int i = 0; i<n; i++){
		memset(visit, false, sizeof(visit));
		int k = 1, j = i;
		
		while (k <= n&&!judge()){
			if (j >= n)
				j = 0;
			if (visit[j]){
				j++;
				continue;
			}
			if (list[j] == k){
				maxNum[i]+=list[j];
				visit[j] = true;
				j++;
				k = 1;
			}
			else{
				k++;
				j++;
			}
		}
		if (ans < maxNum[i])
			ans = maxNum[i];
	}
	printf("%d", ans);
	return 0;
}
