#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main(){

	vector<int> mountains;
	
	for(int i= 0 ; i<10 ; i++){
		int a;
		cin>>a;
		mountains.push_back(a);
	}

	for(int i=0 ; i<mountains.size()-1 ; i++){
		for(int j=0 ; j<mountains.size()-1 ; j++){
			if(mountains[j] < mountains[j+1]){
				int tmp;
				
				tmp = mountains[j];
				mountains[j] = mountains[j+1];
				mountains[j+1] = tmp;
			}
		}
	}

	for(int i ; i<3 ; i++){
		cout<<mountains[i]<<endl;
	}

return 0;
}