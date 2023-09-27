#include <iostream>
#include <set>
#include <string>
#include <algorithm>
using namespace std;

int main(){
string str;
set <string> co;

int n;

cin >> n;
 for(int i=0;i<n;i++){
   cin >> str;
   string s[4];
   for(int j=1;j<str.size();j++){
     s[0] = s[2] = str.substr(0,j);
     s[1] = s[3] = str.substr(j);
     reverse(s[2].begin(),s[2].end());
     reverse(s[3].begin(),s[3].end());
     // reverse(str.begin(),str.end());
     //s[2] = str.substr(0,j);
     //s[3] = str.substr(j);
     for(int k=0;k<4;k+=2){
       for(int l=1;l<4;l+=2){
	 //cout << s[k] << "+" << s[l] << endl;
	 co.insert(s[k]+s[l]);
	 //cout << s[l] << "+" << s[k] << endl;
	 co.insert(s[l]+s[k]);
       }
     }
   }
   cout << co.size() << endl;
   co.clear();
 }
 return 0;
}

     
       