#include<iostream>
#include<string>
#include<vector>
using namespace std;

vector<string> usr_name;

int main(){
  vector<string>::iterator it;
  int n,m,i = 0,j = 0;
  bool k = 0;
  string tmp;
  cin >>n;
  cin.ignore();
  for(i = 0;i < n;i++){
    cin >>tmp;
    usr_name.push_back(tmp);
    cin.ignore();
  }
  cin >> m;
  cin.ignore();
  for(i = 0; i<m;i++){
    j = 0;
    cin >> tmp;
    it = usr_name.begin();
    while(it != usr_name.end()){
      it++;
      if(tmp == usr_name[j]){
	if(k == 0){
	  cout << "Opened by "<<tmp<<endl;
	  k = !k;
	}else{
	  cout << "Closed by "<<tmp<<endl;
	  k = !k;
	}
	j = -1;
	break;
      }
      j++;
    }
    if(j != -1)
      cout <<"Unknown "<<tmp<<endl;
  }
    return 0;
  }