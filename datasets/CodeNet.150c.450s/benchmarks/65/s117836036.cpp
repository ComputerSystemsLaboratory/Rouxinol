#include<iostream>
#include<cstdio>
#include<vector>
#include<cstring>
#include<algorithm>
using namespace std;

#define PB push_back

void Input(int*,vector<string>&);
void Bubblesort(int*,vector<string>);
void Selectionsort(int*,vector<string>);
void Output(int*,vector<string>);

vector<string> vstr_bubble;

int main(int argc,char* argv[]){

  int n;
  vector<string> vstr;

  Input(&n,vstr);
  Bubblesort(&n,vstr);
  Selectionsort(&n,vstr);

  return 0;
}

void Input(int* pn,vector<string>& vstr){
  string str;
  
  cin>>*pn;
  for(int i=0;i<*pn;i++){
    cin>>str;
    vstr.PB(str);
  }
}

void Bubblesort(int *pn,vector<string> vstr){
  
  for(int i=0;i<*pn;i++){
    for(int j=*pn-1;j>i;j--){
      if(vstr[j-1][1]>vstr[j][1]){
	swap(vstr[j-1],vstr[j]);
      }
    }
  }

  Output(pn,vstr);
  puts("Stable");

  vector<string>::iterator itvstr;
  for(itvstr=vstr.begin();itvstr!=vstr.end();itvstr++)
    vstr_bubble.PB(*itvstr);
}

void Selectionsort(int*pn,vector<string> vstr){

  for(int i=0;i<*pn;i++){
    int key=i;
    for(int j=i+1;j<*pn;j++){
      if(vstr[key][1]>vstr[j][1])
	key=j;
    }
    swap(vstr[i],vstr[key]);      
  }

  Output(pn,vstr);

  bool flag=true;
  for(int i=0;i<*pn;i++){
    if(vstr_bubble[i]!=vstr[i]){
      flag=false;
      break;
    }
  }
  if(flag)
    puts("Stable");
  else
    puts("Not stable");
}

  void Output(int *pn,vector<string> vstr){

    cout<<vstr[0];
    for(int i=1;i<*pn;i++)
      cout<<" "<<vstr[i];
    puts("");
  }