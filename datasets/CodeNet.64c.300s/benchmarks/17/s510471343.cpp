#include<iostream>
using namespace std;

int start(int i,int x){
  double a = i*100.0/(100+x);
  if((int)a == a) return (int)a;
  else return (int)a+1;
}

int goal(int i,int x){
  return (int)((i+1)*100.0/(100+x));
}


int main(){
  int before=0,after=1,sum=2;
  int max = 0;
  while(cin>>before>>after>>sum){
    if(before == 0 && after == 0 && sum == 0) break;
    for(int i=1;i<sum;i++){
      int j=sum-i;
      if(i<=j){
	for(int n1 = start(i,before);n1 <= goal(i,before);n1++){
	  for(int n2 = start(j,before);n2 <= goal(j,before);n2++){
	    if((int)(n1*(100.0+before)/100) + (int)(n2*(100.0+before)/100) !=sum ) continue;
	    int s = (int)(n1*(100.0+after)/100) + (int)(n2*(100.0+after)/100);
	    max = (max < s ) ? s : max;
	  }
	}
      }else
	break;
    }
    cout<<max<<endl;
    max = 0;
  }
  return 0;
}