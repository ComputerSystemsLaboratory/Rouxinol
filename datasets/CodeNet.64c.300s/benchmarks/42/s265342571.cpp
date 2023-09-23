#include <bits/stdc++.h>
using namespace std;

int main(){

  while(1){

    int N, M, l[30], tre[21][21] = {0}, x[30], y[30], xx = 10, yy = 10, cnt = 0;
    char d[30];

    cin >> N;
    if(N == 0)break;

    for(int i = 0; i < N; i++){
      cin >> x[i] >> y[i];
      tre[x[i]][y[i]] = 1;
    }
    
    cin >> M;
    
    for(int i = 0; i < M ; i++){
      cin >> d[i] >> l[i];
      if(d[i] == 'N'){
	for(int n = 0; n < l[i]; n++){
	  yy+=1;
	  if(tre[xx][yy] == 1) tre[xx][yy] = 3;
	  //  cout << xx << yy << endl;
	}
      }else if(d[i] == 'S'){
	for(int n = 0; n < l[i]; n++){
	  yy-=1;
	  if(tre[xx][yy] == 1) tre[xx][yy] = 3;
	}
      }
      else if(d[i] == 'E'){
	for(int n = 0; n < l[i]; n++){
	  xx+=1;
	  if(tre[xx][yy] == 1) tre[xx][yy] = 3;
	  // cout << xx << yy << endl;
	}
      }
      else if(d[i] == 'W'){
	for(int n = 0; n < l[i]; n++){
	  xx-=1;
	  if(tre[xx][yy] == 1) tre[xx][yy] = 3;
	  
	}
      }
    }
    for(int i = 0; i < 21; i++){
      for(int j = 0; j < 21; j++){
	//	if(tre[i][j] == 3) cnt++;
	if(tre[i][j] == 3) cnt++;
      }
    }
       if(cnt == N) cout << "Yes" << endl;
    else cout << "No" << endl;
    //    cout << cnt << endl;
  }

  return 0;
}