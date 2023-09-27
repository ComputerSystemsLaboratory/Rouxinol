#include<iostream>
#include<cstdio>
#include<cmath>
#include<map>
#include<string>
#include<cstring>
#include<algorithm>
using namespace std;


int main(){
   int n;
   string s;
   string s1,s2;
   map<string,bool> Index;
   cin >> n;
   while(n-- > 0){
      cin >> s;
      for(int i=1;i<s.length();i++){
	 s1 = s.substr(0,i);
	 s2 = s.substr(i,s.length()-i);	 
	 //cout <<s1 << " " << s2 << endl;
	 Index[s1+s2] = true;
	 Index[s2+s1] = true;
	 reverse(s1.begin(),s1.end()) ;
	 Index[s1+s2] = true;
	 Index[s2+s1] = true;
	 reverse(s1.begin(),s1.end()) ;
	 
	 reverse(s2.begin(),s2.end()) ;
	 Index[s1+s2] = true;
	 Index[s2+s1] = true;
	 reverse(s1.begin(),s1.end()) ;
	 Index[s1+s2] = true;
	 Index[s2+s1] = true;
      }

      cout<< Index.size() << endl;
      Index.clear();
   }
   return 0;
}