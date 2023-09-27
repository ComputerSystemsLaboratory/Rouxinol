#include <iostream>
#include <string>
#define mod 1000003
using namespace std;
int n,m[1000004],ch[1<<8];
int h(int num,int i){return (num%mod+i*(1+num%(mod-1)))%mod;}

void insert(string str){
  int i=0,num=0;
  while(str[i])num=num*5+ch[str[i++]];
  int idx=0;i=0;
  while(m[(idx=h(num,i++))]!=0);
  m[idx]=num;
}

bool find(string str){
  int i=0,num=0;
  while(str[i])num=num*5+ch[str[i++]];
  int idx=0;i=0;
  while(i<mod&&(m[(idx=h(num,i++))]!=0&&m[idx]!=num));
  return m[idx]==num;
}

int main(){
  ch['A']=1,ch['C']=2,ch['G']=3,ch['T']=4;
  cin>>n;
  while(n--){
    string str,key;
    cin>>str>>key;
    if(str[0]=='i')insert(key);
    if(str[0]=='f') cout<<(find(key)?"yes":"no")<<endl;
  }

}