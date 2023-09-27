#include<iostream>
#include<algorithm>

using namespace std;

int main(){
  int x,y,s;
  
  while(cin>>x>>y>>s,x,y,s){
    int m1=1;
    int m2=s-1;
    int ms1,ms2;
    int max=0;
    int total=0;

    while((s/2+1)!=m1){
      if((m1*100)%(100+x)==0)
	ms1=m1*100/(100+x);
      else
	ms1=m1*100/(100+x)+1;
      
      if((m2*100)%(100+x)==0)
	ms2=m2*100/(100+x);
      else
	ms2=m2*100/(100+x)+1;

      if((ms1*(100+x)/100 + ms2*(100+x)/100)!=s){
	m1++;
	m2--;
	continue;
      }
      
      total=ms1*(100+y)/100 + ms2*(100+y)/100;
      
      if(max<total)
	max=total;
      m1++;
      m2--;
    }
    cout<<max<<endl;
  }
}

    