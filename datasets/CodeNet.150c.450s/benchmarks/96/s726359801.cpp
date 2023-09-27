#include<iostream>
#include<cstdio>
#include<algorithm>

using namespace std;

const char keibutton[10][5]={{'\0','\0','\0','\0','\0'},
							 {'.',',','!','?',' '}, //1
						     {'a','b','c'},     //2
						     {'d','e','f'},     //3
						     {'g','h','i'},     //4
						     {'j','k','l'},     //5
						     {'m','n','o'},     //6
						     {'p','q','r','s'}, //7
						     {'t','u','v'},     //8
						     {'w','x','y','z'}};//9


int main(){
	int n,cnt,outcnt,inpcnt;
	char str[1025],outputStr[1025];
	
	cin>>n;
	
	for(int z=0;z<n;z++){
		
		fill(str,str+1025,'\0');
		fill(outputStr,outputStr+1025,'\0');
		cnt=-1;
		inpcnt=0;
		outcnt=0;
		
		cin>>str;
		
		while(true){
			if(str[inpcnt]=='\0'){
				break;
			}
			inpcnt++;
		}
		
		for(int i=0;i<inpcnt;i++){
			if(str[i]=='0'){
				if(i>0 && str[i-1]!='0'){
					outputStr[outcnt]=keibutton[str[i-1]-'0'][cnt];
					outcnt++;
				}
				cnt=-1;
			}
			else if(str[i]=='1'){
				if(cnt>=4){
					cnt=0;
				}
				else{
					cnt++;
				}
			}
			else if(str[i]=='7' || str[i]=='9'){
				if(cnt>=3){
					cnt=0;
				}
				else{
					cnt++;
				}
			}
			else{
				if(cnt>=2){
					cnt=0;
				}
				else{
					cnt++;
				}
			}
		}
		cout<<outputStr<<endl;
	}
}