#include<iostream>
#include<string>
using namespace std;

char table[9][5]={
  {'.',',','!','?',' '},
  {'a','b','c'},
  {'d','e','f'},
  {'g','h','i'},
  {'j','k','l'},
  {'m','n','o'},
  {'p','q','r','s'},
  {'t','u','v'},
  {'w','x','y','z'},
};
int size[9]={5,3,3,3,3,3,4,3,4};


int main(){
  int n;
  cin>>n;
  while(n--){
    string str;
    int p=0;
    int pos=0;
    cin>>str;
    for(int i=0;i<(int)str.size();i++){
      if(str[i]=='0'){
	if(p!=0){
	  cout<<table[pos-1][(p-1)%(size[pos-1])];
	  p=0;
	  pos=0;
	}
      }else{
	pos=int(str[i]-'0');
	p++;
      }

    }
    cout<<endl;

  }
}