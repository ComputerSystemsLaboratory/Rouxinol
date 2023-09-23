#include"iostream"
using namespace std;


int main(){
	int a=100000;
	int b;
	cin>>b;
	for(int i=0;i<b;i++){
	a+=int(a*0.05);
	if(!(a%1000==0)){
	a/=1000;
	a++;
	a*=1000;
	}
	}
	cout << a<< endl;
	return 0;
}