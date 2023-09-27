#include<iostream>
#include<stack>

using namespace std;

int main()
{
	stack<int> hako;
	int temp[100];
	int input[100];
	int t, i = 0, k = 0;
	
	
	while(cin>>t){
		input[i] = t;
		i++;
	}
	
	/*
	while(1){
		cin >> t;
		if( t == -1){
			break;
		}
		input[i] = t;
		i++;
	}
	*/
	for(int j = 0; j < i; j++){
		if(input[j] == 0){
			temp[k] = hako.top();
			hako.pop();
			k++;
		}
		else{
			hako.push(input[j]);
		}
	}
	
	for(int j = 0; j < k; j++){
		cout << temp[j] << endl;
	}
	
}
			