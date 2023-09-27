#include<iostream>
#include<stack>
using namespace std;
int main(void){
	int num;
	stack<int> st;

	while(cin>>num){
		st.push(num);
		if(num==0){
			st.pop();//0ツづーツ渉慊つュ
			cout<<st.top()<<endl;
			st.pop();
		}
	}
	return 0;
}