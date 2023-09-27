/*
created at 4.9.2015 by charis
last edited at 5.9.2015 by charis

*/

#include<iostream>
#include<stack>
using namespace std;

stack<int> order;
stack<pair<int, int> > area;

void pool(){
	while(1){
		pair<int ,int> x = area.top(); area.pop();
		if(area.empty()) {
			area.push(x);	
			break;
		}
		pair<int ,int> y = area.top();
		if(x.first > y.first){
			area.push(x);
			break;
		}
		else{
			int s = x.second + y.second;
			area.pop(); // pop(y)
			area.push(make_pair(x.first, s)); //new area
		}	
	}	
}

int main(){
	char ch;
	int i=0;
	int S=0;
	while(cin>>ch){
		i++;
		if(ch=='e') break;
		if(ch=='/') {
			if(order.empty()==0){
				int t = order.top(); order.pop();
				int l = i - t + 1 ;
				int a = l - 1 ;
				S+=a;
				area.push(make_pair(t, a));
				pool();
			}
		}
		else if(ch=='_'){			
		}
		else {		
			order.push(i);
		}
	}
	
	cout << S << endl;
	int n = area.size();
	
	if (n == 0) cout << "0" << endl;
	else {
		cout << n << " ";
		int A[n];
		for(int j=0; j<n; j++){
			pair<int, int> t = area.top(); area.pop();
			A[n-j-1] = t.second;
		}
		for(int j=0; j<n-1; j++){
			cout << A[j] << " ";
		}
		cout << A[n-1] << endl;
	}
	
	return 0;
}