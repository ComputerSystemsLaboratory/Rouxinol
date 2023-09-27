#include<cstdio>
#include<string>
#include<iostream>

using namespace std;

char num[8]={'a','d','g','j','m','p','t','w'};
int size[8]={3,3,3,3,3,4,3,4};
int main(void){
	string str;
	int n;
	scanf("%d",&n);
	for(int ddd=0;ddd<n;ddd++){
		int cnt=0;
		string res;
		cin >> str;
		for(int i=0;i<str.size();i++){
			if(i==0){
				if(str[i]!='0')cnt++;
			}else{
				if(str[i]!='0')cnt++;
				if(str[i]=='0'){
					if(str[i-1]=='0')continue;
					if(str[i-1]=='1'){
						cnt=(cnt+4)%5;
						if(cnt==0)res+='.';
						if(cnt==1)res+=',';
						if(cnt==2)res+='!';
						if(cnt==3)res+='?';
						if(cnt==4)res+=' ';
					}else res+=num[str[i-1]-'0'-2]+(cnt-1+size[str[i-1]-'0'-2])%size[str[i-1]-'0'-2];
					cnt=0;
				}
			}
		}

		cout << res << endl;
	}
	return 0;
}