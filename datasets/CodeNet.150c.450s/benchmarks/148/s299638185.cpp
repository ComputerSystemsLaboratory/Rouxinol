#include <bits/stdc++.h>
using namespace std;
 
int main(){
	int N;
  	cin >> N;
  	vector<string> S(N);
  	for(int i=0;i<N;i++) cin >> S.at(i);
  	int a=0;
  	int w=0;
  	int t=0;
  	int r=0;
  	for(int i=0;i<N;i++){
    	if(S.at(i) == "AC") a++;
      	else if(S.at(i) == "WA") w++;
      	else if(S.at(i) == "TLE") t++;
      	else if(S.at(i) == "RE") r++;
    }
  cout << "AC" << " " << "x" <<" "<< a << endl;
  cout << "WA" << " " << "x" << " " << w << endl;
  cout << "TLE" << " " << "x" << " " <<t << endl;
  cout << "RE" << " " << "x" <<" "<< r << endl;
}