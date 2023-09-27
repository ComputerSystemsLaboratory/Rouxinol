#include<iostream>
using namespace std;

#include<vector>

int main(){
	int n;
	cin>>n;
	
	/*
	char a1[]={".",",","!","?"," "};
	char a2[]={"a","b","c"};
	char a3[]={"d","e","f"};
	char a4[]={"g","h","i"};
	char a5[]={"j","k","l"};
	char a6[]={"m","n","o"};
	char a7[]={"p","q","r","s"};
	char a8[]={"t","u","v"};
	char a9[]={"w","x","y","z"};
	*/
	
	vector<string> a(10);
	a[1]=".,!? ";
	a[2]="abc";
	a[3]="def";
	a[4]="ghi";
	a[5]="jkl";
	a[6]="mno";
	a[7]="pqrs";
	a[8]="tuv";
	a[9]="wxyz";
	
	for(int k=0;k<n;k++){
		string s;
		cin>>s;
		int cnt=0;
		int mj=0;
		for(int i=0;i<s.size();i++){
			if(s[i]-'0'==0){
				if(mj!=0){
				cout<<a[mj][cnt%a[mj].size()];
				cnt=0;
				mj=0;
				}
			}else{
				if(s[i]-'0'==mj){
					cnt++;
				}else{
					mj=s[i]-'0';
				}
			}
		}
		cout<<endl;
	}
	return 0;
}