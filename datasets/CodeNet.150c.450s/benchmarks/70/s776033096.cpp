#include<iostream>
using namespace std;
#include<cstdio>
int main(){
  int year[12]={31,29,31,30,31,30,31,31,30,31,30,31};
  int month,day,ans;
  while(1){
    cin>>month>>day;
    if(!month && !day)break;
    ans=0;
    for(int i=1;i<month;i++){
      ans+=year[i-1];
    }
    ans+=day;
    switch (ans%7){
    case 1: cout<<"Thursday"<<endl;
	break;
    case 2: cout<<"Friday"<<endl;
	break;
    case 3: cout<<"Saturday"<<endl;
	break;
    case 4: cout<<"Sunday"<<endl;
	break;
    case 5: cout<<"Monday"<<endl;
	break;
    case 6: cout<<"Tuesday"<<endl;
	break;
    case 0: cout<<"Wednesday"<<endl;
	break;
    }
  }
}