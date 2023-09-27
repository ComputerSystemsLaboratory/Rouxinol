#include<iostream>
#include<set>

using namespace std;

int main() {
  int n;
  set<string> registered;
  cin>>n;
  for(int i=0; i<n; i++) {
    string str;
    cin>>str;
    registered.insert(str);
    //cout<<str<<endl;
  }
  string state = "closed";
  int m;
  cin>>m;
  for(int i=0; i<m; i++) {
    string str;
    cin>>str;
    set<string>::iterator itr;
    itr = registered.find(str);
    if(itr != registered.end()) {
      if(state == "closed") {
	cout<<"Opened by "<<str<<endl;;
	state = "opened";
      }
      else {
	cout<<"Closed by "<<str<<endl;
	state = "closed";
      }
    }
    else {
      cout<<"Unknown "<<str<<endl;
    }
  }
}