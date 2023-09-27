#include<iostream>
#include<algorithm>
using namespace std;

int main(void)
{
 int str[3];
 for(int i=0;i<3;i++) cin >> str[i];
 for(int i=0;i<3;i++){
  for(int j=i+1;j<3;j++){
   if(str[i] > str[j]) swap(str[i],str[j]);
  }
 }
 cout << str[0] << " " << str[1] << " "<< str[2] << endl;
 return 0;
}