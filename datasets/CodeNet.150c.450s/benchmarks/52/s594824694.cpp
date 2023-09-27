#include<iostream>
#include<string>
#include<cstdio>
#include<stack>
#include<algorithm>
using namespace std;
int main(void){
    int j=0;
	int k;
	int b[1000]={0};
	stack<int> a;
	
	while(cin>>k){



        if(k==0){
            cout<<a.top()<<endl;

            a.pop();
        }
        else a.push(k);
	}
	/*for(int i=0;i<j;i++){
        cout<<b[i]<<endl;
	}
*/

	return 0;
}