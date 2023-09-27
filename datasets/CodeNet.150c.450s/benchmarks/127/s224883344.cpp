#include<iostream>
#include<string>
#include<map>
using namespace std;

int main(){
  int i,j,a,counter;
  string line;

  int m,ii;
  cin >> m;
  for(ii=0; ii<m; ii++){
    counter=0;
    cin >> line;
    int len;
    len = line.size();
    map<string,bool> p;

    string A1,A2,B1,B2,C;
    for(a=1; a<len; a++){
      for(i=0;i<a;i++) A1+=line[i];
      for(i=a-1; i>=0; i--) A2+=line[i];

      for(i=a; i<len; i++) B1+=line[i];
      for(i=len-1; i>=a; i--) B2+=line[i];

      C=A1+B1;
	if(p[C]==false){
	  counter++;
	  p[C]=true;
	}

      C=A1+B2;
	if(p[C]==false){
	  counter++;
	  p[C]=true;
	}

      C=A2+B1;
	if(p[C]==false){
	  counter++;
	  p[C]=true;
	}

      C=A2+B2;
	if(p[C]==false){
	  counter++;
	  p[C]=true;
	}

      C=B1+A1;
	if(p[C]==false){
	  counter++;
	  p[C]=true;
	}

      C=B1+A2;
	if(p[C]==false){
	  counter++;
	  p[C]=true;
	}

      C=B2+A1;
	if(p[C]==false){
	  counter++;
	  p[C]=true;
	}

      C=B2+A2;
	if(p[C]==false){
	  counter++;
	  p[C]=true;
	}
	A1.clear();
	A2.clear();
	B1.clear();
	B2.clear();
    }


    cout << counter << endl; 
  }
 return 0;
}