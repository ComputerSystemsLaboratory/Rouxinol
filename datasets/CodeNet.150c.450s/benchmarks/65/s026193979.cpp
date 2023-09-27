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
}

void Selectionsort(int*pn,vector<string> vstr){
  bool bflag=false;
  int iflag;

  for(int i=0;i<*pn;i++){
    int key=i;
    iflag=0;
    for(int j=i+1;j<*pn;j++){
      if(vstr[key][1]>=vstr[j][1]){
	if(vstr[key][1]==vstr[j][1]){
	  iflag=j;
	}
	else
	  key=j;
      }
    }
    if(i!=key){
      swap(vstr[i],vstr[key]);
      if(iflag!=0 && key!=iflag)
	bflag=true;
    }
      
  }

  Output(pn,vstr);
  if(bflag) puts("Not stable");
  else puts("Stable");
}

  void Output(int *pn,vector<string> vstr){

    cout<<vstr[0];
    for(int i=1;i<*pn;i++)
      cout<<" "<<vstr[i];
    puts("");
  }