#include<iostream>
using namespace std;
void dfs(int,int);
int box[52][52];
int main(){
  int w,h,i,I,a;
  while(1){
    a=0;
    cin>>w>>h;
    if(w==0&&h==0) break;
    for(i=0;i<=h+1;i++){
      for(I=0;I<=w+1;I++){
	box[i][I]==0;
      }
    }
    for(i=1;i<=h;i++){
      for(I=1;I<=w;I++){
	cin>>box[i][I];
      }
    }
    for(i=1;i<=h;i++){
      for(I=1;I<=w;I++){
	if(box[i][I]==1){
	  dfs(i,I);
	  a++;
	}
      }
    }
    cout<<a<<endl;
  }
  return 0;
}
  void dfs(int i,int I){
  if(box[i][I]==0) return;
  box[i][I]=0;
  dfs(i,I+1);
  dfs(i+1,I+1);
  dfs(i+1,I);
  dfs(i+1,I-1);
  dfs(i,I-1);
  dfs(i-1,I-1);
  dfs(i-1,I);
  dfs(i-1,I+1);
  }