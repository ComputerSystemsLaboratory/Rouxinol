#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <climits>
#include <cfloat>
#include <map>
#include <utility>
#include <set>
#include <iostream>
#include <fstream>
#include <memory>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>
#include <sstream>
#include <complex>
#include <stack>
#include <queue>
#include <cstring>
#include <assert.h>

#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define rep(i,n)  FOR(i,0,n)
#define EXIST(s,e) ((s).find(e)!=(s).end())
#define ALL(s) begin(s),end(s)
#define VIEW(dat) for(auto v : dat){cout<<v<<endl;}
#define clr(a) memset((a),0,sizeof(a))
#define nclr(a) memset((a),-1,sizeof(a))
#define pb push_back
#define INRANGE(x,s,e) ((s)<=(x) && (x)<(e))
#define MP(a,b) make_pair((a),(b))


const int INF=1<<24;

using namespace std;

string valOf(int n){ stringstream ss;ss<<n;return ss.str();}
int    valOf(string s){return atoi(s.c_str());}
int    valOf(char s){return (unsigned int)(s - '0');}

string deco(int id,int n){
	switch(id){
		case 1:
		switch(n){
			case 0:	return ".";
			case 1:	return ",";
			case 2:	return "!";
			case 3:	return "?";
			case 4:	return " ";	
		}break;
		case 2:
		switch(n){
			case 0:	return "a";
			case 1:	return "b";
			case 2:	return "c";
		}break;	
		case 3:
		switch(n){
			case 0:	return "d";
			case 1:	return "e";
			case 2:	return "f";
		}break;	
		case 4:
		switch(n){
			case 0:	return "g";
			case 1:	return "h";
			case 2:	return "i";
		}break;	
		case 5:
		switch(n){
			case 0:	return "j";
			case 1:	return "k";
			case 2:	return "l";
		}break;	
		case 6:
		switch(n){
			case 0:	return "m";
			case 1:	return "n";
			case 2:	return "o";
		}break;	
		case 7:
		switch(n){
			case 0:	return "p";
			case 1:	return "q";
			case 2:	return "r";
			case 3:	return "s";
		}break;		
		case 8:
		switch(n){
			case 0:	return "t";
			case 1:	return "u";
			case 2:	return "v";
		}break;	
		case 9:
		switch(n){
			case 0:	return "w";
			case 1:	return "x";
			case 2:	return "y";
			case 3:	return "z";
		}break;
	}
	return "";
}



string solve(string s){
	int nn=-1;
	string rls="";
	vector<int> num(11);
	rep(i,10){
		num[i]=0;
	}
	rep(i,s.size()){
		if(!valOf(s[i])){
			rls+=deco(nn,num[nn]);
			rep(i,10){
				num[i]=0;
			}
			nn=-1;
		}
		switch(valOf(s[i])){
			case 1:
				if(nn==1){
			    	num[nn]++;
			    }nn=1;
				if(num[nn]>4){
					num[nn]=0;
				}
				break;
			case 2:
			   if(nn==2){
			    	num[nn]++;
			    } nn=2;
				if(num[nn]>2){
					num[nn]=0;
				}
				break;
			case 3:
				if(nn==3){
			    	num[nn]++;
			    }nn=3;
				if(num[nn]>2){
					num[nn]=0;
				}
				break;
			case 4:
				if(nn==4){
			    	num[nn]++;
			    }nn=4;
				if(num[nn]>2){
					num[nn]=0;
				}
				break;
			case 5:
				if(nn==5){
			    	num[nn]++;
			    }nn=5;
				if(num[nn]>2){
					num[nn]=0;
				}
				break;
			case 6:
				if(nn==6){
			    	num[nn]++;
			    }nn=6;
				if(num[nn]>2){
					num[nn]=0;
				}
				break;
			case 7:
				if(nn==7){
			    	num[nn]++;
			    }nn=7;
				if(num[nn]>3){
					num[nn]=0;
				}
				break;
			case 8:
				if(nn==8){
			    	num[nn]++;
			    }nn=8;
				if(num[nn]>2){
					num[nn]=0;
				}
				break;
			case 9:
				if(nn==9){
			    	num[nn]++;
			    }nn=9;
				if(num[nn]>3){
					num[nn]=0;
				}
				break;
		}
	}
	return rls;
}
	

int main(){
	
	int  n;
	
	string in;
	
	//ifstream cin("in.txt");
	
	cin>>n;
	while(n--){
		cin>>in;
		cout<<solve(in)<<endl;
	}
}