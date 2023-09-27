#include<iostream>
using  namespace std;
int moji(char);
int a(int);

int moji(char x){
  if(x=='m')  return 1000;
  else if(x=='c') return 100;
  else if(x=='x') return 10;
  else if(x=='i') return 1;
  else return 0;
}
int main(){
  int sum=0;
  string str;
  char dami,dami2;
  int n,f=0;
  cin>>n;
  for(int i=0;i<=n;i++){
    getline(cin,str);
    sum=0;
    for(int i=0;i<str.size();i++){
      if(str[i]>='0' && str[i]<='9'){ 
sum+=(str[i]-'0')*moji(str[i+1]);
 i++;
      }else{
 sum+=moji(str[i]);
      }
    }
    while(sum>0){
      f=1;
      sum-=a(sum);
    }
    if(f==1)  cout<<endl;
  }

  return 0;
}

  int a(int x){
    if(x/1000>0){
      if(x/1000>1)
	cout<<x/1000<<"m";
      else cout<<"m";
      return (x/1000)*1000;
    }
    else if(x/100>0){
      if(x/100>1) cout<<x/100<<"c";
      else cout<<"c";
      return (x/100)*100;
    }
    else if(x/10>0){
      if(x/10>1) cout<<x/10<<"x";
      else cout<<"x";
      return (x/10)*10;
    }
    else if(x>1) cout<<x<<"i";
    else cout<<"i";
    return x;
  }