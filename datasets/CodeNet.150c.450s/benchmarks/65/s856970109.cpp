#include <iostream>
using namespace std;
class Card{
public:
  char m;
  int n;
};
int main(void){
  int n,min,f=0;
  Card b[36],s[36];
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>b[i].m>>b[i].n;
    s[i]=b[i];
  }
  for(int i=0;i<n-1;i++){
    for(int j=n-1;j>i;j--){
      if(b[j-1].n>b[j].n)
	swap(b[j-1],b[j]);
    }
  }
  for(int i=0;i<n;i++){
    min=i;
    for(int j=i;j<n;j++){
      if(s[j].n<s[min].n){
	min=j;
      }
    }
    swap(s[i],s[min]);
  }
  for(int i=0;i<n-1;i++)
    cout<<b[i].m<<b[i].n<<" ";
  cout<<b[n-1].m<<b[n-1].n<<endl;
  cout<<"Stable"<<endl;
  for(int i=0;i<n-1;i++){
    if(b[i].m!=s[i].m)
      f=1;
    cout<<s[i].m<<s[i].n<<" ";
  }
  cout<<s[n-1].m<<s[n-1].n<<endl;
  if(f)
    cout<<"Not stable"<<endl;
  else
    cout<<"Stable"<<endl;
  return 0;
}