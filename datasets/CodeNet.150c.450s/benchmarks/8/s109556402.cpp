#include<iostream>
#include<string>
using namespace std;

int main()
{
  int n,i,j,ta=0,ha=0;
  string a,b;
  cin >> n;
  for(i=0;i<n;i++){
    cin >>a >>b;
    for(j=0;j<100;j++){
        if(a==b){ta++; ha++; break;}
        else if(a[j]>b[j]){ ta+=3; break;}
        else if(b[j]>a[j]){ ha+=3; break;}
    } 
  }
  cout << ta << " " << ha << endl;
  
}