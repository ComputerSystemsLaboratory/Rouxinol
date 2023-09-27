#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(void){
while(1){
int n;
cin>>n;
if(n==0)break;
vector<string> s(n);
for(int i=0;i<n;i++){
	cin>>s[i];
}
int ans=0;
bool f=false;
int r=0,l=0;
for(int i=0;i<n;i++){
if(s[i]=="lu")l=1;
if(s[i]=="ru")r=1;
if(s[i]=="ld")l=0;
if(s[i]=="rd")r=0;
if(l==r){
	if(r==1&&!f){
		f=true;
		ans++;
	}
	if(r==0&&f){
		f=false;
		ans++;
	}

}

}
cout<<ans<<endl;
}

return 0;
}

