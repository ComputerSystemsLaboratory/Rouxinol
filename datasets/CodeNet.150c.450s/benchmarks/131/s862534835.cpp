#include<iostream>
#include<cstdio>
#include<algorithm>
#include<map>
#include<cstring>
#include<cmath>
using namespace std;
typedef pair<int,int> P;
int main(){
  string a0,s;
  int L,value[10000],cost,len,stoi,smax,smin,I,J;
  char trans[10000];
  map<string,P> mep;
  while(true){
    cin >> a0 >> L;
    if(a0 == "0" && L == 0)break;
    I=J=cost=0;
    mep.clear();
    while(true){
      s.clear();
      cost = 0;
      len = a0.length();
      if(I!=0){
      mep[a0].first++;
      if(mep[a0].first == 2){
	cout << mep[a0].second << " " << a0 <<" " << I-mep[a0].second << endl;
	break;
      }
      mep[a0].second = I;
      }

      //cout << "L = " << L << ", len = "<< len << ", L-len = " << L-len << endl;
      if(L-len > 0){
	for(int i=0;i<L;i++){
	  if(L-a0.length() >i){
	    s+="0";cost++;
	  }else{
	    s+=a0[i-cost];
	  }
	}
	a0 = s;
	len = a0.length();  //cout << "s =" <<  s << endl;
      }
    
      len = L;
      if(I == 0){
      mep[a0].first++;
      if(mep[a0].first == 2){
	cout << mep[a0].second << " " << a0 <<" " << I-mep[a0].second << endl;
	break;
      }
      mep[a0].second = I;
      }
    
      
      //cout << "value = ";
      for(int i=0;i<len;i++){
	value[i] = a0[i]-'0';
	//cout << value[i];
      }
      //cout << endl;
      
      sort(value,value+len);
      stoi=0;
      for(int i=0;i<len;i++){
	stoi += value[i]*pow(10,i);
      }
      smax = stoi;
      //cout << "smax = " << smax << endl;
      sort(value,value+len,greater<int>() );
      stoi=0;
      for(int i=0;i<len;i++){
	stoi += value[i]*pow(10,i);
      }
      smin = stoi;
      //cout << "smin = " << smin << endl;
      sprintf(trans,"%d",smax-smin);
      a0.clear();
      for(int i=0;i<strlen(trans);i++){
	a0+=trans[i];
      }
      //cout << "a0 = " << a0 << endl;
      I++;
    }

  }
  return 0;
}