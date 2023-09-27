#include<iostream>
#include<string>
#include<queue>

using namespace std;

int main(){
	queue<double> step;
	string in;
	int n;
	while(cin >> n,n){
		int count = 0;
		for(int i=0;i<n;i++){
			double tmp;
			cin >> in;
			if(in == "lu" || in == "ru")	tmp = 1;
			else if(in == "ld" || in == "rd")	tmp = -1;
			step.push(tmp);
		}
		int sum = 2;
		int target = 4;
		while(!step.empty()){
			sum += step.front();
			step.pop();
			if(sum == target){
				count++;
				target = 6 - min(target,4);
			}
		}
		cout << count << endl;
	}
	return 0;
}