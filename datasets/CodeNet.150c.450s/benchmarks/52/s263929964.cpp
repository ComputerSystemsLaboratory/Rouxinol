#include<stack>
#include<deque>
#include<iostream>
using namespace std;
int main(){
	int m,n;
	deque<int>deq;
 	while(1){
	    cin>>n;
	    if(cin.eof()) break;
	    if(n!=0) deq.push_back(n);
	    else {  
                     if(deq.empty()) { continue;}
                     else {     cout<<deq[(int)deq.size()-1]<<endl;
				deq.pop_back();}
            }
	}
        return 0;
}