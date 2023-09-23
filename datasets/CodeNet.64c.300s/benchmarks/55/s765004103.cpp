#include <iostream>
using namespace std;
int main(){

    int input,No;
    No=1;
	while(1){
		cin>>input;
		if(input==0){
			break;
		}else{
			cout<<"Case"<<" "<<No<<": "<<input<<endl;
			No+=1;
			input=0;
		}
	}

	return 0;
}