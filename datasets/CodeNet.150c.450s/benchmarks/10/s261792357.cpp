#include<iostream>

using namespace std;

int main(){

  int n,b,f,r,v;
  int count[4][3][10];
  
  for(b=0; b<=3; b++){
    for(f=0; f<=2; f++){
      for(r=0; r<=9; r++){
	count[b][f][r]=0;
      }
    }
  }

  cin >> n;
  for(int i=0; i<n; i++){
    cin >> b >> f >> r >> v;

    count[b-1][f-1][r-1] += v;
  }

  for(b=0; b<=3; b++){
    for(f=0; f<=2; f++){
      for(r=0; r<=9; r++){
	cout << " " << count[b][f][r];
      }
      cout << endl;
    }
    if(b<3) cout << "####################" << endl;
  }
}