#include<iostream>
#include<cstdio>
#include<string>
#include<algorithm>

using namespace std;

int main(){
	int n,m;
	char bef[201];
	char aft[201];
	while(scanf("%d",&n)){
		if(n==0)
		break;
		string s;
		cin.ignore();
		for(int i=0;i<n;i++){
			getline(cin,s);
			bef[i] = s[0];
			aft[i] = s[2];
		}
		scanf("%d",&m);
		char temp;
		int ch=0;
		cin.ignore();
		for(int i=0;i<m;i++){
			getline(cin,s);
			temp = s[0];
			for(int j=0;j<n;j++){
				if(temp==bef[j]){
					printf("%c",aft[j]);
					ch=1;
					break;
				}
			}
			if(ch==0)
			printf("%c",temp);
			ch=0;
		}
		printf("\n");
	}
}