#include<iostream>
#include<queue>
#include<string>
using namespace std;

int main(){
	int n,q,i,time=0;
	cin >> n >> q;
	queue<int> Q;
	
	int input_Num[n];
	string input_Str[n];
	for (i=0;i<=n-1;i++){
		cin >> input_Str[i];
		cin >> input_Num[i];
	}
	
	for (i=0;i<=n-1;i++){
		Q.push(i);
	}
	
	while (!Q.empty()){
		i=Q.front();
		Q.pop();
		if (input_Num[i]>q){
			input_Num[i]-=q;
			Q.push(i);
			time+=q;
		}else{
			time+=input_Num[i];
			cout << input_Str[i] << " " <<time << endl;
		}
	}
	
	return 0;
}