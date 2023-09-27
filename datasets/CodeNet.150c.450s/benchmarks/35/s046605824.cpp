#include<iostream>
#include<vector>

using namespace std;

#define N 2<<30;

int main(){

  int n;


  while(cin >> n){
    if(n == 0) break;
    vector<int> V;
    int status;
    int in;
    int sum = 0;
    for(int i = 0; i < n; i++){
      cin >> in;
      if(i == 0){
	if(in < 0){
	  status = -1;
	  V.push_back(in);
	}
	else if(in >= 0)status = 1;

      } else {

	if(in < 0 && status > 0){
	  status = -1;
	  V.push_back(sum);
	  sum = 0;
	  V.push_back(in);
	  continue;
	}else if(in < 0 && status < 0){
	  V.push_back(in);
	  continue;
	}else if(in >= 0 && status < 0){
	  status = 1;
	  V.push_back(sum);
	  sum = 0;
	}
      }
      sum += in;
    }
    if(sum >= 0) V.push_back(sum);

    int max = -1*N;
    
    for(int i = 0; i < V.size(); i++){
      sum = 0;
      for(int j = i; j < V.size(); j++){
	sum += V[j];
	if(max < sum) max = sum;
      }
    }
    
    cout << max << endl;
  }
  return 0;
}