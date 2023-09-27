#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <stack>
using namespace std;
//常に心してかかれ
int main(){
	int n;
	int q;
	int tmp;
	int C=0;
	int num_to_check;
	int S[10001];
	stack<int> T;

	cin >>n;

	for(int i=0;i<n;i++){
		scanf("%d",&S[i]);
	}

	/*確認
	for(int i=0;i<n;i++){
		cout <<S[i] <<" ";
	}
	cout <<endl;
	*/

	cin >>q;

	for(int i=0;i<q;i++){
		scanf("%d",&tmp);
		T.push(tmp);
	}

	/*確認
	while(!T.empty()){
		cout <<T.top() <<" ";
		T.pop();
	}
	cout <<endl;
	*/

	while(!T.empty()){
		num_to_check = T.top();
		T.pop();

		for(int i=0;i<n;i++){
			if(num_to_check == S[i]){
				C++;
				break;
			}
		}
	}
	cout <<C <<endl;

	return 0;
}