#include<cstdio>
#include<cmath>
#include<algorithm>
using namespace std;
bool judge(int i){
	int m=sqrt(i);
	if(m*m==i)
		return true;
	return false;
}
bool cut(int x){
	int list[10]={0},i=0;
	while(x>0){
		list[i]=x%10;
		x/=10;
		i++;
	}
	int j,k=i-1;
	int s=0,s2=0;
	for(i--;i>0;i--){
		s+=list[i];
		if(!judge(s)){ 
			s*=10;
			continue;
		}
		for(j=i-1;j>=0;j--){
			s2+=list[j];
			if(j==0)
				continue;
			s2*=10;
		} 
		if(s2==0)
			continue;
		if(judge(s2)){
			return true;
		}
		s2=0;
		s*=10;
	} 
	return false;
}
int main(){
	int x,y;
	scanf("%d %d", &x, &y);
	for(int i=x; i<=y; i++){
		if(judge(i))
			if(cut(i))
				printf("%d\n", i);
	}
	return 0;
}
