#include<iostream>
#include<string>
#include<set>
#include<algorithm>
using namespace std;
set<string> st;
void looks(string,string);
void fiset(string,string);
int main(){
  int n;
  string a;
  string b1,b2;
  int si;

  cin >> n;
  for(int i=0;i<n;i++){
    //

    st.clear();
    //in
    cin >> a;
    si=a.size();
    for(int j=1;j<si;j++){
      int k;
      b1.clear();
      b2.clear();
      for(k=0;k<j;k++){
	b1+=a[k];
      }
      for(;k<si;k++){
	b2+=a[k];
      }
      looks(b1,b2);
    }
    cout << st.size() << endl;
  }
  return 0;
}
void looks(string n1,string n2){
  for(int i=0;i<4;i++){
    if(i==0)fiset(n1,n2);
    if(i==1||i==3){
      reverse(n1.begin(),n1.end());
      fiset(n1,n2);
    }
    if(i==2){
      reverse(n2.begin(),n2.end());
      fiset(n1,n2);
    }
  }
}
void fiset(string a,string b){
  string x;
  for(int i=0;i<2;i++){
      x.clear();
      if(i==1)a.swap(b);
	x+=a;
	x+=b;
      st.insert(x);
  }
}