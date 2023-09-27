#include <iostream>
#include <string>
using namespace std;
int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		string s1,s2,a[10]={"0","","2","3","4","5","6","7","8","9"};
		cin>>s1>>s2;
		int l1=s1.size(),l2=s2.size(),n1=0,n2=0,kei=1;
		for(int j=0;j<l1;j++){
			if(s1[j]=='2') kei=2;
			else if(s1[j]=='3') kei=3;
			else if(s1[j]=='4') kei=4;
			else if(s1[j]=='5') kei=5;
			else if(s1[j]=='6') kei=6;
			else if(s1[j]=='7') kei=7;
			else if(s1[j]=='8') kei=8;
			else if(s1[j]=='9') kei=9;
			else if(s1[j]=='m'){
				n1=n1+kei*1000;
				kei=1;
			}
			else if(s1[j]=='c'){
				n1=n1+kei*100;
				kei=1;
			}
			else if(s1[j]=='x'){
				n1=n1+kei*10;
				kei=1;
			}
			else if(s1[j]=='i'){
				n1=n1+kei;
				kei=1;
			}
		}
		for(int j=0;j<l2;j++){
			if(s2[j]=='2') kei=2;
			else if(s2[j]=='3') kei=3;
			else if(s2[j]=='4') kei=4;
			else if(s2[j]=='5') kei=5;
			else if(s2[j]=='6') kei=6;
			else if(s2[j]=='7') kei=7;
			else if(s2[j]=='8') kei=8;
			else if(s2[j]=='9') kei=9;
			else if(s2[j]=='m'){
				n2=n2+kei*1000;
				kei=1;
			}
			else if(s2[j]=='c'){
				n2=n2+kei*100;
				kei=1;
			}
			else if(s2[j]=='x'){
				n2=n2+kei*10;
				kei=1;
			}
			else if(s2[j]=='i'){
				n2=n2+kei;
				kei=1;
			}
		}
		int t=n1+n2;
		int m[4]={t/1000,(t/100)%10,(t/10)%10,t%10};
		string s[4]={"m","c","x","i"};
		for(int j=0;j<4;j++){
			if(m[j]!=0){
				cout<<a[m[j]]<<s[j];
			}
		}
		cout<<endl;
	}
    return 0;
}