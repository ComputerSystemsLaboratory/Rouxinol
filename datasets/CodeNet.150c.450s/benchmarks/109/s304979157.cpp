#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
int main(){
  vector<int> st;
  vector<int> fi;
  int n,t;
  int c,m;
  string T;
  while(1){
    c=0;
    m=0;
    st.erase(st.begin(),st.end());
    fi.erase(fi.begin(),fi.end());
    //
    cin >> n;
    if(n==0)break;
    for(int i=0;i<n;i++){
      cin >> T;
      t=(T[0]-'0')*36000+(T[1]-'0')*3600+(T[3]-'0')*600+(T[4]-'0')*60+(T[6]-'0')*10+T[7]-'0';
      st.push_back(t);
      cin >> T;
      t=(T[0]-'0')*36000+(T[1]-'0')*3600+(T[3]-'0')*600+(T[4]-'0')*60+(T[6]-'0')*10+T[7]-'0';
      fi.push_back(t);
    }
    sort(st.begin(),st.end());
    sort(fi.begin(),fi.end());
    int i1=0,i2=0;
    while(1){
      if(st[i1]<fi[i2]){
	i1++;
	c++;
	m=max(m,c);
	if(i1==n)break;
      }
      else{
	i2++;
	c--;
	if(i2==n)break;
      }
    }
    cout << m << endl;
  }
  return 0;
}