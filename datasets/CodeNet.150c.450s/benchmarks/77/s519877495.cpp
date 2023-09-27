#include <bits/stdc++.h>
using namespace std;
int main(){
	int a,b,i,f,r;
	bool c[21][21];
	char ch;
	while(cin>>i,i){
		memset(c,0,sizeof(c));
		while(i--)cin>>a>>b,c[a][b]=1;
		cin>>i,a=b=10;c[a][b]=0;
		while(i--){
			cin>>ch>>f;
			while(f--){
				switch (ch) {
					case 'N':b++;break;
					case 'E':a++;break;
					case 'S':b--;break;
					case 'W':a--;break;
				}
				c[a][b]=0;
			}
		}
		a=b=20,f=0;
		while(a--)for(r=0;r<21;r++)if(c[a][r])f++;
		cout<<(f?"No":"Yes")<<endl;
	}
}