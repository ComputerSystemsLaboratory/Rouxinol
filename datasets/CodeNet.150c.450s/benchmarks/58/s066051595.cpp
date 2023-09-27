#include<bits/stdc++.h>
#define REP(j,n) for(int j=0;j<n;j++)
using namespace std;
int main (void){
	stack<int> s;
	char b[200];
	int temp,temp1;
	while(scanf("%s",b) != EOF){
		if(b[0] == '-'){	
				temp = s.top();
				s.pop();
				temp1 = s.top();
				s.pop();
				s.push(temp1 - temp);
			}
		else if(b[0] == '+'){	
				temp = s.top();
				s.pop();
				temp1 = s.top();
				s.pop();
				s.push(temp + temp1);
			}
		else if( b[0] =='*'){	
				temp = s.top();
				s.pop();
				temp1 = s.top();
				s.pop();
				s.push(temp * temp1);
		}
		else if(b[0] =='/'){	
				temp = s.top();
				s.pop();
				temp1 = s.top();
				s.pop();
				s.push(temp1 / temp);
			}
		else{
				s.push(atoi(b));
		}
	 }
	
	cout << s.top() << endl;
	return 0;
}