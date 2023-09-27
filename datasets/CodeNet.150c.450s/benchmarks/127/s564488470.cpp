#include <iostream>
#include <string>
#include <list>
using namespace std;

string revstr(string &moto){
     string temp;
     for(int i=moto.size()-1;i>-1;i--)temp+=moto[i];
     return temp;
}

int main(){
     int M;
     cin>>M;
     for(int count=0;count<M;count++){
	  string str;
	  cin>>str;
	  list<string> changed;
	  changed.push_back(str);
	  changed.push_back(revstr(str));
	  for(int k=1;k<str.size();k++){
	       string temp1,temp2;
	       for(int i=0;i<k;i++){
		    temp1+=str[i];
	       }
	       for(int i=k;i<str.size();i++){
		    temp2+=str[i];
	       }
	       changed.push_back(temp2+temp1);
	       changed.push_back(revstr(temp1)+temp2);
	       changed.push_back(revstr(temp2)+temp1);
	       changed.push_back(temp1+revstr(temp2));
	       changed.push_back(temp2+revstr(temp1));
	       changed.push_back(revstr(temp1)+revstr(temp2));
	       changed.push_back(revstr(temp2)+revstr(temp1));
	  }
	  /*list<string>::iterator it = changed.begin();
	  while( it != changed.end() )
	  {
	       cout << *it << endl;
	       ++it;
	       }*/
	  changed.sort();changed.unique();
	  
	  cout<<changed.size()<<endl;
     }
}