#include<iostream>
#include<stack>
using namespace std;
int main(void){
	int i;
	string s;
	cin >> s;
	int k = s.size();
	pair<int, int> p;
	stack<pair<int, int> > P;// ????§???´?????¨????????´???
	int n = 0;//?°´??????????????°
	int m[10000] = {0};//??¢???
	stack<int> S;
	
	for(i=0;i<k;i++){
		if(s[i] == '\\') {
			S.push(i);
		}else if(s[i] == '/'){
			if(! S.empty()){
				p.first = S.top();
				S.pop();
				p.second = i;
				while(! P.empty()){
					if(P.top()<=p)break;
						P.pop();
						n--;				
				}
				P.push(p);
				n++;	
					
			}
		}
	}
	
	for(i=0;i<n;i++){
		
		int d = 0;
		pair<int, int> q = P.top();
		P.pop();
	//	cout << q.first << q.second << endl;
		for(int j = q.first; j <= q.second; j++){
			if(s[j] == '\\'){
				d=d+2;
				m[i] += d-1;
			}else if(s[j] =='/'){
				d=d-2;
				m[i] += d+1;
			}else {
				m[i] += d;
			}
		}
	}
	for(i=0;i<n;i++){
		m[i]=m[i]/2;
		}
	int mall = 0;
	for(i=0;i<n;i++){
		mall +=m[i];
	}
	
	cout << mall <<endl;
	cout << n;
	
	for(i=n-1;i>=0;i--){
		cout << " " <<m[i];
	}
	cout << endl;
				
	
	return 0;
}
		 
		
		