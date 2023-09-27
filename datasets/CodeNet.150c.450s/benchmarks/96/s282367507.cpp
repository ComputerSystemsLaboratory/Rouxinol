#include<bits/stdc++.h>
using namespace std;

int key[10];

// プロトタイプ宣言
void Reset(void);
char Output(int);
// ここまで

int main(){
	Reset();

	int n;	cin>>n;
	for(int i=0;i<n;i++){
		string ans="";
		string s;
		cin>>s;
		for(int j=0;j<s.length();j++){
			int num=s[j]-'0';
			//printf("<%d>\n",num);

			if(num==0){
				for(int k=1;k<=9;k++){
					if(key[k]<0)continue;
					else ans+=Output(k);
				}
				Reset();
			}else{
				key[num]++;
			}
		}

		cout<<ans<<endl;
	}


	return 0;
}



void Reset(void){ for(int i=0;i<10;i++) key[i]=-1; }
char Output(int num){
	char word[10][5]={
		{'A','B','C','D','E'},// 使わない
		{'.',',','!','?',' '},
		{'a','b','c','F','G'},
		{'d','e','f','H','I'},
		{'g','h','i','J','K'},
		{'j','k','l','L','M'},
		{'m','n','o','N','O'},
		{'p','q','r','s','P'},
		{'t','u','v','Q','R'},
		{'w','x','y','z','S'}};

	int tmp=key[num];
	switch(num){
		case 1:
			tmp%=5;
			break;
		case 7:
		case 9:
			tmp%=4;
			break;
		default:
			tmp%=3;
			break;
	}

	return word[num][tmp];
}

