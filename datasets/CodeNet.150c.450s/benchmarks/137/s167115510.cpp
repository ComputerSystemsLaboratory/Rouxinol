#include<iostream>
#include<set>
#include<algorithm>
using namespace std;

#define PB push_back

int main(int argc,char* argv[]){
  std::ios_base::sync_with_stdio(false);
  
  int n;
  string str;
  set<string> sstr[4];

  cin>>n;
  for(int i=0;i<n;i++){
    cin>>str;

    if(str[0]=='i'){
      cin>>str;
      switch(str[0]){
      case 'A':
	sstr[0].insert(str);
	break;
      case 'C':
	sstr[1].insert(str);
	break;
      case 'G':
	sstr[2].insert(str);
	break;
      case 'T':
	sstr[3].insert(str);
      }
    }
    else{
      cin>>str;
      switch(str[0]){
      case 'A':
	if(sstr[0].find(str)!=sstr[0].end())
	  cout<<"yes"<<endl;
	else
	  cout<<"no"<<endl;
	break;
      case 'C':
	if(sstr[1].find(str)!=sstr[1].end())
	  cout<<"yes"<<endl;
	else
	  cout<<"no"<<endl;
	break;
      case 'G':
	if(sstr[2].find(str)!=sstr[2].end())
	  cout<<"yes"<<endl;
	else
	  cout<<"no"<<endl;
	break;
      case 'T':
	if(sstr[3].find(str)!=sstr[3].end())
	  cout<<"yes"<<endl;
	else
	  cout<<"no"<<endl;
	break;
      }
    }
  }
  return 0;
}