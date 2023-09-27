#include<iostream>
using namespace std;

char memo[101][101];
int h,w;
void fruit(int a,int b,char c);

int main(){
  while(1){
    int t=0;
    for(int i=0;i<101;i++){
      for(int j=0;j<101;j++){
	memo[i][j]='Q';
      }
    }
    cin >> h >> w;
    if(w==0&&h==0)break;
    for(int i=0;i<h;i++){
      cin >> memo[i];
    }
    
    for(int i=0;i<h;i++){
      for(int j=0;j<w;j++){
	if(memo[i][j]!='1'){
	  fruit(i,j,memo[i][j]);
	  t++;
	}
      }
    }
    cout << t << endl;
  }
}

void fruit(int i,int j,char c){
  if( i>=0 && j>=0 && i<h && j<w && memo[i][j]==c){
    memo[i][j]='1';
    /*if(c==memo[i+1][j])*/ fruit(i+1,j,c);
    /*if(c==memo[i-1][j])*/ fruit(i-1,j,c);
    /*if(c==memo[i][j+1])*/ fruit(i,j+1,c);
    /*if(c==memo[i][j-1])*/ fruit(i,j-1,c);
    return;
  }
  return;
}