#include <iostream>
using namespace std;

int ari;
int jiku[102];
int u[102];
int v[102][102];
int ushi[102][102];
int main(){
  cin>>ari;
  for(int i=1;i<ari+1;i++){
    cin>>u[i];
    cin>>jiku[u[i]];
      for(int j=1;j<jiku[u[i]]+1;j++){
	cin>>v[u[i]][j];
      }
  }
  for(int k=1;k<ari+1;k++){
  //	cout << jiku[k] << endl;
    for(int l=1;l<jiku[k]+1;l++){
    //	cout << k << " " << l << endl;
      for(int m=1;m<ari+1;m++){
		//cout<<v[k][l];
	if(v[k][l]==u[m]){ushi[k][m]=1;}
	//	cout<<ushi[k][m];
      }
    }
  }
    for(int k=1;k<ari+1;k++){
      for(int m=1;m<ari;m++){
	cout<<ushi[k][m]<<" ";
      }cout<<ushi[k][ari];
      cout<<endl;}
}