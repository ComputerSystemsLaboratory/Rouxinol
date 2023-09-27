#include <iostream>
#include <utility>
using namespace std;

int main() {
	while(1){
	int a;int b;
	cin >> a >> b;
	if(a== 0&b==0){break;}
	if(a>b){swap(a,b);}
	cout << a <<" "<<b<<endl;
	}	
	return 0;

}