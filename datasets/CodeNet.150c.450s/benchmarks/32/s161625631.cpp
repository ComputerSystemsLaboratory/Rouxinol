#include<bits/stdc++.h>
using namespace std;

int main(){
  int m,nmin,nmax,dmax,num;

  while(true){
    cin >> m >> nmin >> nmax;
    
    if(m == 0 && nmin == 0 && nmax == 0) break;

    int *score = new int[m];

    
    for(int i = 0; i<m; ++i)
      cin >> score[i];
    
    
    for(int i=nmin; i<nmax+1; ++i){
      if(i == nmin) dmax = score[i-1] - score[i];


      //cout << score[i-1] << " - " << score[i] << endl;
      if(score[i-1] - score[i] >= dmax){
	dmax = score[i-1] - score[i];
	num = i;

	//cout << num << " ******" << endl;
      }
    }

    delete[] score;

    cout << num << endl;
    
    dmax = num = 0;
    
  }
  return 0;
}

