/* All men have limits. They learn what they are and learn
   not to exceed them, I ignore mine. -Batman           */
#include <bits/stdc++.h>
//#include <iostream>
//#include <Windows.h>
using namespace std;
void swap(char &i,char &j){
	char temp;
	temp=i;i=j;j=temp;	
}

int main(){
string s;
cin>>s;
for(int i=0;i<s.length()/2;i++){
	swap(s[i],s[s.length()-i-1]);
}
cout<<s<<endl;
return 0;
}