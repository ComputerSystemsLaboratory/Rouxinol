#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main(){

  	int input;
  	vector<int>number;
  	while(cin >> input){
    	number.push_back(input);
    }
  	
  	bool answer = false;

  	for(int i = 0; i<2; i++){
    	if(number.at(i) < number.at(i+1)){
        	answer = true;
        }
      	else{
        	answer = false;
          	break;
        }
     }
  	
  
  	if(answer){
    	cout << "Yes" << endl;
    }
    else{
    	cout << "No" << endl;
    }
  
  	return 0;
}
