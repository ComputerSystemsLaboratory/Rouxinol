#include<iostream>
#include<vector>

using namespace std;

int main(){
  int pair[100];
  int input;
  vector<int> inputs;
  
  for(int i = 0; i < 10; i++)
    for(int j = 0; j < 10; j++)
      pair[i * 10 + j] = i + j;


  while(cin >> input) inputs.push_back(input);

  for(int k = 0; k < (int)inputs.size(); k++){
    int input = inputs[k];
    int count = 0;
    
    if(input <= 36){
      for(int i = 0; i < 100; i++){
	int cd = input - pair[i];
	
	if(cd <= 18 && cd >= 0){
	  for(int j = 0; j < 100; j++) if(pair[j] == cd)
	      count++;
	}
      }
    }
    
    cout << count << endl;
  }

  return 0;
}