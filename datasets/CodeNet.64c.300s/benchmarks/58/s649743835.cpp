#include<iostream>
using namespace std;

char F[102][102];


//????????´
void r(int y,int x){
 if(F[y][x]!='@'){
	return ;
 }

F[y][x]='.';

r(y-1,x);
//r(y-1,x+1);
r(y,x+1);
//r(y+1,x+1);
r(y+1,x);
//r(y+1,x-1);
r(y,x-1);
//r(y-1,x-1);

}
//??????
void k(int y,int x){
 if(F[y][x]!='#'){
	return ;
 }

F[y][x]='.';

k(y-1,x);
//k(y-1,x+1);
k(y,x+1);
//k(y+1,x+1);
k(y+1,x);
//k(y+1,x-1);
k(y,x-1);
//k(y-1,x-1);

}
//?????????
void m(int y,int x){
 if(F[y][x]!='*'){
	return ;
 }

F[y][x]='.';

m(y-1,x);
//m(y-1,x+1);
m(y,x+1);
//m(y+1,x+1);
m(y+1,x);
//m(y+1,x-1);
m(y,x-1);
//m(y-1,x-1);

}

int main(){
 int n,p;

while(1){
 cin>>n>>p;

 if(n==0&&p==0)break;

 for(int i=1;i<=n;i++)
	for(int g=1;g<=p;g++)
		cin>>F[i][g];

 int cnt=0;
 for(int i=1;i<=n;i++)
	for(int g=1;g<=p;g++){
		//????????´
		if(F[i][g]=='@'){
			cnt++;
			r(i,g);
		}
		//??????
		if(F[i][g]=='#'){
			cnt++;
			k(i,g);
		}
		//?????????
		if(F[i][g]=='*'){
			cnt++;
			m(i,g);
		}
	}
 cout<<cnt<<endl;
}

return 0;
}

		