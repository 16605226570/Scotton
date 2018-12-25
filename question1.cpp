#include<cstdio>
#include<cstring>
#include<iostream>
#include<queue>
#include<algorithm>
using namespace std;
const int maxn=300;
char str1[maxn],str2[maxn],str[maxn]; 
int find(char ch){
	for(int i=0; i<strlen(str); i++){
		if(str[i]==ch)
			return i;
	}
	return -1;
}
void ereaseto(int s, int t, bool flag){
	if(flag){
		int len1=strlen(str1),len=strlen(str);
		for(int i=s; i<=t; i++){
			str1[len1+i-s]=str[i];
		}
		str1[len1+t-s+1]=0;
		for(int i=0; i<len-t-1; i++) {
			str[i+s]=str[t+i+1];
		}
		str[len-t-s-1]=0;
	}else{
		int len2=strlen(str2),len=strlen(str);
		for(int i=s; i<=t; i++){
			str2[len2+i-s]=str[i];
		}
		str2[len2+t-s+1]=0;
		for(int i=0; i<len-t-1; i++) {
			str[i+s]=str[t+i+1];
		}
		str[len-t-s-1]=0;
	}
}
int main(){
	cin>>str1>>str2;
	int i=0,j=0;
	while(1){
		int len=strlen(str);
		if(find(str1[i])!=-1){
			ereaseto(find(str1[i]),len,true);
		}else{
			str[len++]=str1[i];
			i++;
		}
		if(find(str2[j])!=-1){
			ereaseto(find(str1[j]),len,false);
			j++;
		}else{
			str[len++]=str2[j];
		}
		if(str1==0){
			if(str!=0){
				printf("-1");
				return 0;
			}else{
				printf("%s",str2);
				return 0;
			}	
		}
		if(str2==0){
			if(str!=0){
				printf("-1");
				return 0;
			}else{
				printf("%s",str1);
				return 0;
			}	
		}
	}
	return 0;
} 
