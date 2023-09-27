#include<iostream>
#include<string>
using namespace std;

int main(){
	int value[100], x, max=0;
        string max_is = "";
	
	for(int j=0; j<100; j++){
		value[j] = 0;
	}
	
	while(cin>>x){
		value[x-1]++;
	}
	
	for(int i=0; i<100; i++){
		if(max<value[i]){
			max = value[i]; 
			max_is = "";
			max_is = to_string(i+1);
		}else if(max == value[i]){
			max_is = max_is + "\n" + to_string(i+1);
		}
	}

	cout << max_is << endl;

	return 0;
}

	