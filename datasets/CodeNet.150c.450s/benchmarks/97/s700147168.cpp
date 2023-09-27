#include <bits/stdc++.h>
using namespace std;

int main(){

  int n;

  while(cin >> n && n){

    int cnt = 0;
    int xmax = INT_MIN, ymax = INT_MIN;
    int value;
    int direction;
    int xcopy, ycopy;
    int block[402][402];

    for(int i = 0; i < 402; i++){
      for(int j = 0; j < 402; j++){
	block[i][j] = 300;
      }
    }
    
    // vector<int> block[200];
    int judge = 0;
    block[200][200] = 0;

    for(int i = 1; i < n; i++){
      cin >> value >> direction;
      if(direction == 0){
	for(int s = 0; s < 402; s++){
	  for(int l = 0; l < 402; l++){
	    if(value == block[s][l]){
	      block[s][l-1] = i;
	      judge = 1;
	      break;
	    }
	  }
	  if(judge == 1){
	    judge = 0;
	    break;
	  }
	}
      }else if(direction == 2){
	for(int s = 0; s < 402; s++){
	  for(int l = 0; l < 402; l++){
	    if(value == block[s][l]){
	      block[s][l+1] = i;
	      judge = 1;
	      break;
	    }
	  }
	  if(judge == 1){
	    judge = 0;
	    break;
	  }  
	}
      }else if(direction == 3){
	for(int s = 0; s < 402; s++){
	  for(int l = 0; l < 402; l++){
	    if(value == block[s][l]){
	      block[s-1][l] = i;
	      judge = 1;
	      break;
	    }
	  }
	  if(judge == 1){
	    judge = 0;
	    break;
	  }  
	}
      }else if(direction == 1){
	for(int s = 0; s < 402; s++){
	  for(int l = 0; l < 402; l++){
	    if(value == block[s][l]){
	      block[s+1][l] = i;
	      judge = 1;
	      break;
	    }
	  }
	  if(judge == 1){
	    judge = 0;
	    break;
	  }  
	}
      }
    }
    int xmin = INT_MAX, ymin = INT_MAX;
    int max = INT_MIN, min = INT_MAX;
    for(int s = 0; s < 402; s++){
      for(int l = 0; l < 402; l++){
	if(block[s][l] != 300){
	  if(xmax < l) xmax = l;
	  if(xmin > l) xmin = l;
	  if(ymax < s) ymax = s;
	  if(ymin > s) ymin = s;
	}
      }
    }
    /*  for(int s = 0; s < 402; s++){
      for(int l = 0; l < 402; l++){
	cout << block[s][l] << " ";
      }
      cout << endl;
    }
*/
    cout << xmax - xmin + 1 << " " << ymax - ymin + 1 << endl;
  }



return 0;
}