#include <iostream>
#include <algorithm>
#include <vector>
#include <sstream>

using namespace std;
 
typedef pair<string,int> P;
 
string change(string L,string R,int len){
    stringstream LL(L),RR(R),T;
    int l,r,t;
 
    LL >> l; RR >> r;
    t = l - r;
    T << t;
 
    string tmp,res = "";
    T >> tmp;
   
    for(int i = (int)tmp.size() ; i < len ; i++){
	res += "0";
    }
    res += tmp;
    return res;
}
 
int main(){
    int L;
    string a;
 
    while(cin >> a >> L){
	if(a == "0" && L == 0) break;
 
	vector<P> v;
	int cnt = 1;
	v.push_back(P(a,0));
 
	if((int)a.size() != L){
	    for(int i = (int)a.size() ; i < L ; i++){
		a += "0";
	    }
	}
 
	while(true){
	    sort(a.begin(),a.end());
	    string b = a;
	    reverse(a.begin(),a.end());
	    string c = a;
	    a = change(c,b,L);
       
	    if(cnt){
		for(int i = 0 ; i < (int)v.size() ; i++){
		    if(v[i].first == a){
			string d = "";
			int j;
  
			for(j = 0 ; j < (int)a.size() ; j++){
			    if(a[j] == '0') continue;
			    else break;
			}
			for(int k = j ; k < (int)a.size() ; k++){
			    d += a[k];
			}
			if(d == "") d += "0";
			a = d;
			cout << v[i].second << " " << d << " "
			     << (cnt - v[i].second) << endl;
			goto end;
		    }
		}
	    }
	    v.push_back(P(a,cnt));
	    cnt++;
	}
    end:;
    }
    return 0;
}