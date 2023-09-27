#include<iostream>
#include<fstream>
#include<vector>

using namespace std;

string input[4] = {"AC","WA","TLE","RE"};

int main(){
  int N=0;
  int M=sizeof(input)/sizeof(string);
  vector<int> S(M,0);
  cin >> N;
  for(int i=0;i<N;i++){
    string C;
    cin >> C;
    for(int i=0;i<M;i++){
      if(C==input[i]){
	S[i]++;
	break;
      }
    }
  }

  for(int i=0;i<M;i++){
    cout << input[i] << " x " << S[i] << endl;
  }    
}