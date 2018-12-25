#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
const int maxn = 100000;
int list[maxn];
bool find(int n, int x){
	for (int i = 0; i<n; i++){
		if (list[i] == x)
			return true;
	}
	return false;
}
int main(){
	memset(list, -1, sizeof(list));
	int pos = 0, n, m;
	scanf("%d %d", &n, &m);
	while (1){
		n %= m;
		n *= 10;
		if (n == 0)
			break;
		if (!find(pos, n / m)){
			list[pos] = n / m;
			pos++;
		}
		else{
			if (n / m == 0)
				continue;
			break;
		}
	}
	sort(list, list + pos);
	for (int i = 0; i<pos; i++){
		printf("%d", list[i]);
	}
	return 0;
}
