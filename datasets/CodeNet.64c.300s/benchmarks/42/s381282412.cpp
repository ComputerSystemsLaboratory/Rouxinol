#include<iostream>
using namespace std;
int main(){
  int M,l,b;
  int x,y;
  char d;
  while(cin>>b){
    int a[21][21]={};
    if(b==0)break;

    for(int i=0;i<b;i++){
      cin>>x>>y;
      a[y][x]=1;
    }

    cin>>M;

    x=10;
    y=10;

    for(int i=0;i<M;i++){
      cin>>d>>l;
      
      for(int j=0;j<l;j++){	
	if(d=='N') y++;
	else if(d=='E')x++;
	else if(d=='S')y--;
	else x--;

	if(a[y][x]==1) b--;
	a[y][x]=0;
      }
    }
    if(b==0)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
  }

  return 0;
}