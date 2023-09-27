#include<iostream>
#include<string>
using namespace std;
int main(){
	int n;
	cin>>n;
	string a,d[9];
	d[0]=".,!? ",d[1]="abc",d[2]="def",d[3]="ghi",d[4]="jkl";
	d[5]="mno",d[6]="pqrs",d[7]="tuv",d[8]="wxyz";
	for(int i=0;i<n;i++){
		cin>>a;
		int count=-1;
		for(int j=0;j<a.size();j++){
			if(j!=0){
			if(a[j]=='0'&&a[j-1]!='0'){
				cout<<d[a[j-1]-'1'][count];
			    count=-1;
			}
			}
			if(a[j]!='0')
			    count++;
			if(a[j]=='1')
				count%=5;
			else if(a[j]=='7'||a[j]=='9')
				count%=4;
			else
				count%=3;
		}
		cout<<endl;
	}
    return 0;
}