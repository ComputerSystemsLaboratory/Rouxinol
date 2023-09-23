#include <iostream>
using namespace std;

int main() {
	int ajyo,asu,ari,aei,bjyo,bsu,bri,bei;
	cin>>ajyo>>asu>>ari>>aei>>bjyo>>bsu>>bri>>bei;
	if(ajyo+asu+ari+aei<bjyo+bsu+bri+bei){
		cout<<bjyo+bsu+bri+bei<<endl;
	}
	else if(ajyo+asu+ari+aei>bjyo+bsu+bri+bei){
		cout<<ajyo+asu+ari+aei<<endl;
	}
	else{
		cout<<bjyo+bsu+bri+bei<<endl;
	}
	return 0;
}