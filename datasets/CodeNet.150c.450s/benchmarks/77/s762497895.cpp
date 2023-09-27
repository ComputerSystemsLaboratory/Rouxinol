#include<iostream>
using namespace std;

int main(){
 
 while(1){

    int N,M;
    int po[21][21]={};

    cin>>N;
    if(N==0) break;
    int p,q;

    for(int i=0;i<N;i++){
      cin>>p>>q;
      po[p][q]=1;
    }

    cin>>M;

    char d;
    int j;
    int x2=10,y2=10;
    int f=0;

    for(int i=0;i<M;i++){
      cin>>d>>j;
      for(int s=0;s<j;s++){
	if(d=='N') y2+=1;
	else if(d=='E') x2+=1;
	else if(d=='S') y2-=1;
	else x2-=1;
	if(po[x2][y2]==1){
	  f++;
	  po[x2][y2]=0;
	}
      }
    }

    if(f==N) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
  }
  return 0;
}