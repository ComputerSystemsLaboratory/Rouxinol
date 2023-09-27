#include<iostream>
#include<string>
using namespace std;
int main(){
	string str,str1;
	int player1,player2,point1=0,point2=0,len,a=0,b=0,turn,count,count2;
	cin>>turn;
	for(count=0;count<turn;count++){
		cin>>str>>str1;
		if(str.length()>str1.length()){
			len=str1.length();
		}else if(str.length()<str1.length()){
			len=str.length();
		}else{
			len=str.length();
		}
		for(count2=0;count2<len;count2++){
			a=str[count2]-'a';
			b=str1[count2]-'a';
			if(a>b){
				player1=1;
				player2=0;
				break;
			}else if(a<b){
				player1=0;
				player2=1;
				break;
			}else{
				player1=0;
				player2=0;
			}
		}
		if(player1==1){
			point1+=3;
		}else if(player2==1){
			point2+=3;
		}else if(str.length()==str1.length()){
			point1++;
			point2++;
		}else if(str.length()>str1.length()){
			point1+=3;
		}else{
			point2+=3;
		}
	}
	cout<<point1<<' '<<point2<<endl;
	return 0;
}