#include <iostream>
using namespace std;

char F[102][102];
void DFSA(int y,int x){
	if(F[y][x]!='@')
		return;
	F[y][x]='.';
	DFSA(y-1,x  );
	DFSA(y  ,x+1);
	DFSA(y+1,x  );
	DFSA(y  ,x-1);
}
void DFSP(int y,int x){
	if(F[y][x]!='#')
		return;
	F[y][x]='.';
	DFSP(y-1,x  );
	DFSP(y  ,x+1);
	DFSP(y+1,x  );
	DFSP(y  ,x-1);
}
void DFSO(int y,int x){
	if(F[y][x]!='*')
		return;
	F[y][x]='.';
	DFSO(y-1,x  );
	DFSO(y  ,x+1);
	DFSO(y+1,x  );
	DFSO(y  ,x-1);
}
int main(){
	int n,m;
	while(1){
		cin>>n>>m;
		if(n==0&&m==0) break;
		for(int y=1;y<=n;y++){
			for(int x=1;x<=m;x++){
				cin>>F[y][x];
			}
		}		

		int c=0;
		for(int y=1;y<=n;y++){
			for(int x=1;x<=m;x++){
				if(F[y][x]=='@'){
					c++;
					DFSA(y,x);
				}
				if(F[y][x]=='#'){
					c++;
					DFSP(y,x);
				}
				if(F[y][x]=='*'){
					c++;
					DFSO(y,x);
				}
			}
		}
	cout<<c<<endl;
	}
	return 0;

}