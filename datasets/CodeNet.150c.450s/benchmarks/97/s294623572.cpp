#include<iostream>
using namespace std;

const int MAX=401;

int main(){
  int sq[MAX][MAX];
  int N;

  while(1){
    int k=0;
    cin>>N;
    if(N==0)break;

    for(int i=0;i<MAX;i++){
      for(int j=0;j<MAX;j++){
	sq[i][j]=-1;
      }
    }

    sq[200][200]=k++;
    for(int i=0;i<N-1;i++){
      int n,d;
      cin>>n>>d;
      for(int i=1;i<MAX;i++){
	for(int j=1;j<MAX;j++){
	  if(sq[i][j]==n){
	    if(d==0) sq[i][j-1]=k++;
	    else if(d==1) sq[i+1][j]=k++;
	    else if(d==2) sq[i][j+1]=k++;
	    else if(d==3) sq[i-1][j]=k++;
	  }
	}
      }
    }
    
    int max_x1,max_y1,max_x2,max_y2;
    bool flag_x,flag_y;
    flag_x=flag_y=0;
    
    for(int i=1;i<MAX;i++){
      for(int j=1;j<MAX;j++){
	if(sq[j][i]!=-1&&flag_x==0){
	  max_x1=i;
	  flag_x=1;
	}
	if(sq[i][j]!=-1&&flag_y==0){
	  max_y1=i;
	  flag_y=1;
	}
	if(sq[j][i]!=-1) max_x2=i;
	if(sq[i][j]!=-1) max_y2=i;
      }
    }
    cout<<(max_x2-max_x1)+1<<" "<<(max_y2-max_y1)+1<<endl;
  }
  return 0;
}