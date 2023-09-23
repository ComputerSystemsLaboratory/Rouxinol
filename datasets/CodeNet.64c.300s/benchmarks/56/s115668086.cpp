#include<iostream>
#include<vector>
using namespace std;

int main(void){
  int n;
  cin>>n;
  while(n--){
    int y,m,d;
    unsigned long long days = 0;
    cin>>y>>m>>d;
    // year
    for(int i = 1; i < y ; i ++){
      if(0==i%3){
	days += 200;
      }else{
	days += (19 + 20) * 5;
      }
    }
    // month
    if(y%3!=0){// hutuu year is  150 days
      // big is 20 days , small is 19
      for(int i = 0 ; i < m-1 ; i ++){
	if(i%2==0){ // big
	  days += 20;
	}else{ // small 
	  days += 19;
	}
      }
    }else{ // %3 year is 200 days
      // big 
      days += 20 * (m-1);
    }
    
    cout<<196471 - days - d<<endl;
  }

}