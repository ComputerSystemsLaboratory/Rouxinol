#include<iostream>
using namespace std;

int main(){
   int m,d,ans;
   while(cin >> m >> d&&m|d){
      ans=d;
      if(m>=2) ans+=31;
      if(m>=3) ans+=29;
      if(m>=4) ans+=31;
      if(m>=5) ans+=30;
      if(m>=6) ans+=31;
      if(m>=7) ans+=30;
      if(m>=8) ans+=31;
      if(m>=9) ans+=31;
      if(m>=10) ans+=30;
      if(m>=11) ans+=31;
      if(m>=12) ans+=30;
      if(ans%7==5) cout << "Monday" << endl;
      if(ans%7==6) cout << "Tuesday" << endl;
      if(ans%7==0) cout << "Wednesday" << endl;
      if(ans%7==1) cout << "Thursday" << endl;
      if(ans%7==2) cout << "Friday" << endl;
      if(ans%7==3) cout << "Saturday" << endl;
      if(ans%7==4) cout << "Sunday" << endl;
   }
}