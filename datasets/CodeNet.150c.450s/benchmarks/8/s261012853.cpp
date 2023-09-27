#include <iostream>
#include <string.h> 
using namespace std;

int main()
{
    int i,turn,score=0,score2=0;
	string str;
	string str2;
	cin>>turn;
	for(i=0;i<turn;i++){
		cin>>str;
		cin>>str2;
		if(str==str2){
			score+=1;
			score2+=1;
		}else if(str<str2){
			score2+=3;
		}
		else{
			score+=3;
		}
	}
	cout<<score<<" "<<score2<<endl;
    return 0;
}