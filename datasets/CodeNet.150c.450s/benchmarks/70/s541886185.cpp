#include <algorithm>
#include <vector>
#include <math.h>
#include <stdio.h>
#include <cctype>
#include <iostream>
#include <set>
#include <string>
#include <queue>
#include <map>
#include <utility>
using namespace std;
int size(string x){
	string::size_type size=x.size();
	return size;
}
#define fu(l,k) for(int i=l;i<k;i++)
#define fd(l,k) for(int i=l;i>k;i--)
#define sort(ss) sort(ss.begin(), ss.end())
#define rsort(ss) sort(ss.rbegin(), ss.rend())
typedef  vector<string> vs;
typedef  vector<int> vi;
double pi(){
	return M_PI;
}
typedef set<int> set_i;
typedef set<string> set_s;
int INF=1000000;
int main(){
	int m,d,ans;
	string w[7]={"Monday","Tuesday","Wednesday",
	               "Thursday","Friday","Saturday","Sunday"};
	while(1){
		cin>>m>>d;
		if(m==0&&d==0) break;
		if(m==1||m==4||m==7){
			//start:Thursday
			ans=d%7;
			if(ans<5){
				cout<<w[3+ans-1]<<endl;
			}
			else if(ans==6){
				cout<<w[1]<<endl;
			}
			else cout<<w[2]<<endl;
		}
		if(m==2||m==8){
			//start:Sunday
			ans=d%7;
			if(ans==1) cout<<w[6]<<endl;
			else if(ans==0) cout<<w[5]<<endl;
			else cout<<w[ans-2]<<endl;
		}
		if(m==3||m==11){
			//start:Monday
			ans=d%7;
			if(ans==0) cout<<w[6]<<endl;
			else cout<<w[ans-1]<<endl;
		}
		if(m==6){
			//start:Tuesday
			ans=d%7;
			if(ans!=0){
				cout<<w[ans]<<endl;
			}
			else{
				cout<<w[6]<<endl;
			}
		}
		if(m==10){
			//start:friday
			ans=d%7;
			if(ans<4){
				cout<<w[4+ans-1]<<endl;
			}
			else{
				cout<<w[ans-4]<<endl;
			}
		}
		if(m==5){
			//Saturday
			ans=d%7;
			if(ans==0) cout<<w[4]<<endl;
			else if(ans<3){
				cout<<w[5+ans-1]<<endl;
			}
			else{
				cout<<w[ans-3]<<endl;
			}
		}
		if(m==9||m==12){
			//start:Wednesday
			ans=d%7;
			if(ans==0) cout<<w[1]<<endl;
			else if(ans<6){
				cout<<w[2+ans-1]<<endl;
			}
			else{
				cout<<w[0]<<endl;
			}
		}
	}
}