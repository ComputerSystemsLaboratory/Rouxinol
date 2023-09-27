#include <iostream>
#include <string>
using namespace std;


int main()
{
	int n;
	int taroPoint=0,hanakoPoint=0;
	string taroCard,hanakoCard;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>taroCard>>hanakoCard;
		if(taroCard > hanakoCard){
			taroPoint += 3;
		}else if(taroCard < hanakoCard){
			hanakoPoint += 3;
		}else{
			taroPoint += 1;
			hanakoPoint += 1;
		}
	}
	cout<<taroPoint<<" "<<hanakoPoint<<endl;

	return 0;
}