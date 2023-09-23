#include<iostream>
#include<algorithm>
using namespace std;
const int INF=(1<<21);
int main(){

  int n;
  
  while(cin>> n,n){
    int town[11][11];
    int a,b,c;
    int min_total=INF;
    int min_town=0;
    int s[11]={0};
    for(int i=0;i<11;i++){
      for(int j=0;j<11;j++){
	town[i][j]=(i==j)?0:INF;
      }
    }
 
    int v=0;
    for(int i=0;i<n;i++){
    cin>> a>> b>> c;
    town[a][b]=c;
    town[b][a]=c;
    v=max(max(v,a),b);
  }

    for(int i=0;i<=v;i++){
      for(int j=0;j<=v;j++){
	for(int k=0;k<=v;k++){
	  town[j][k]=min(town[j][k],town[j][i]+town[i][k]);
	}
      }
    }

    for(int i=0;i<=v;i++){
      int total=0;
      for(int j=0;j<=v;j++){
	total+=town[i][j];
      }
      s[i]=total;
      min_total=min(min_total,total);
    }
    for(int i=0;i<=v;i++){
      if(s[i]==min_total){
	cout<< i<< ' ';
	cout<< min_total<< endl;
	break;
      }
    }
  }
}