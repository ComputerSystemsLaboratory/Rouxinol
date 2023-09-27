#include <iostream>
using namespace std;

int face[6],new_face[6];
string s;

int main(){
  for(int i=0;i<6;i++){
	  cin>>face[i];
  }
  cin>>s;
  for(int i=0;i<6;++i){
	  new_face[i] = face[i];
  }
  for(int i=0;i<s.size();i++){
	if(s[i]=='S'){
		new_face[0]=face[4];
		new_face[1]=face[0];
		new_face[4]=face[5];
		new_face[5]=face[1];
	}else if(s[i]=='N'){
		new_face[0]=face[1];
		new_face[1]=face[5];
		new_face[4]=face[0];
		new_face[5]=face[4];
	}else if(s[i]=='E'){
		new_face[0]=face[3];
		new_face[2]=face[0];
		new_face[3]=face[5];
		new_face[5]=face[2];			
	}else if(s[i]=='W'){
		new_face[0]=face[2];
		new_face[2]=face[5];
		new_face[3]=face[0];
		new_face[5]=face[3];			
	}
	for(int j=0; j<6; ++j){
		face[j] = new_face[j];
	}
  }
  cout<<face[0]<<endl;
}

