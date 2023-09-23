#include <iostream>
#include <utility>
 
using namespace std;
 
int gcn(int a,int b){
if(a < b){swap(a,b);} 
while(b != 0){
a = a%b;
swap(a,b);
}
return a;
}
 
int main() {
	int n;int m;
while(cin >> n >> m){
cout << gcn(n,m) << " " << n/gcn(n,m) *m << endl;
}
	return 0;
}