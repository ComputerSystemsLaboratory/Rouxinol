#include <iostream>
#include <string>
using namespace std;

int main(){
  int n;
  string s[155];
  while(1){
    cin>>n;
    if(n==0)break;
    int cnt=0;
    for(int i=0;i<n;i++) cin>>s[i];
    for(int i=0;i<n-1;i++){
      if((s[i+1]=="lu"&&s[i]=="ru")||(s[i]=="lu"&&s[i+1]=="ru")){
	i++;
	cnt++;
      }else if((s[i+1]=="ld"&&s[i]=="rd")||(s[i]=="ld"&&s[i+1]=="rd")){
	i++;
	cnt++;
      }
    }
    cout<<cnt<<endl;
  }
  return 0;
}