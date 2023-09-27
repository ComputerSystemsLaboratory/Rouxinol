//48
#include<iostream>
#include<string>

using namespace std;

int main(){
  int n;
  cin>>n;
  cin.ignore();
  while(n--){
    string s;
    getline(cin,s);
    for(int i=0;i<s.size();i++){
      int cn=0;
      char c=s[i];
      for(;s[i]!='0';i++,cn++) ;
      if(c!='0'){
	string bc[]={"",".,!? ","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
	cout<<bc[c-'0'][(cn-1)%bc[c-'0'].size()];
      }
    }
    cout<<endl;
  }
  return 0;
}