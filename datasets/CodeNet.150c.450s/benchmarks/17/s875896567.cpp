#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
	
	int i;
	vector<int> vec(5.0);
	
	
	for(i = 0 ; i<5 ; i++){
		cin >> vec[i];
	}
	
	
	
	sort(vec.begin() , vec.end() );
	
	for(i = 4; i>=0 ; i--){
		
		
		
		if(i == 0)  cout << vec[i] << endl;
		
		else    cout << vec[i] <<" ";
		
	}
	
	return 0;
	
}