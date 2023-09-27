#include<iostream>
#include<string>
using namespace std;

int main(){
  int N, AC = 0, WA = 0, TLE = 0, RE = 0;
  string tmp;
  cin >> N;
  
  for(int i = 0; i < N; i++){
    cin >> tmp;
    if(tmp == "AC") AC++;
    else if(tmp == "WA") WA++;
    else if(tmp == "TLE") TLE++;
    else if(tmp == "RE") RE++;
  }
  
  cout << "AC x " << AC << endl
       	<< "WA x " << WA << endl
    	<< "TLE x " << TLE << endl
    	<< "RE x " << RE << endl;
    
  return 0;
}
    