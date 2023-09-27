#include <iostream>
using namespace std;
bool flag;
int i,j,k,n;
string s;
string out;
char button[9][5]={{'.',',','!','?',' '},
{'a','b','c'},
{'d','e','f'},
{'g','h','i'},
{'j','k','l'},
{'m','n','o'},
{'p','q','r','s'},
{'t','u','v'},
{'w','x','y','z'}
} ;
int main(){
	cin >> n;
	for(int p=0;p<n;p++){
		cin >> s;
		flag=false;
		i=-1;
		j=k=0;
		while(k!=s.size()){
			switch(s[k]){
				case'1':
				if(i==0){
					j++;
				}else{
					j=0;
					i=0;
				}
				if(j==5)j=0;
				break;
				case'2':
				if(i==1){
					j++;
				}else{
					j=0;
					i=1;
				}
				if(j==3)j=0;
				break;
				case'3':
				if(i==2){
					j++;
				}else{
					j=0;
					i=2;
				}
				if(j==3)j=0;
				break;
				case'4':
				if(i==3){
					j++;
				}else{
					j=0;
					i=3;
				}
				if(j==3)j=0;
				break;
				case'5':
				if(i==4){
					j++;
				}else{
					j=0;
					i=4;
				}
				if(j==3)j=0;
				break;
				case'6':
				if(i==5){
					j++;
				}else{
					j=0;
					i=5;
				}
				if(j==3)j=0;
				break;
				case'7':
				if(i==6){
					j++;
				}else{
					j=0;
					i=6;
				}
				if(j==4)j=0;
				break;
				case'8':
				if(i==7){
					j++;
				}else{
					j=0;
					i=7;
				}
				if(j==3)j=0;
				break;
				case'9':
				if(i==8){
					j++;
				}else{
					j=0;
					i=8;
				}
				if(j==4)j=0;
				break;
				case'0':
				if(i!=-1)cout <<button[i][j];
				flag=true;
				i=-1;
				break;
			}
			k++;
		}
		if(flag)cout <<endl;

	}

	return  0;
}