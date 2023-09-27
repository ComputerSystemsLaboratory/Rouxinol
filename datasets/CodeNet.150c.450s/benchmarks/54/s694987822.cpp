#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
	string W, T;
	string::size_type W_size,T_size;
	int ans=0;
	
	cin>>W;
	transform(W.begin(),W.end(), W.begin(), ::toupper);
	W_size = W.size();
	
	for(;;){
	cin>>T;
	T_size = T.size();
	if(T != "END_OF_TEXT"){
		std::transform(T.begin(), T.end(), T.begin(), ::toupper);
		if(T.find(W) != string::npos){
			if(T_size == W_size)
			ans++;
		}
	}
	else
		break;
	}
	cout<<ans<<endl;
	
	return 0;
}