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
	return acos(-1.0);
}
typedef set<int> set_i;
typedef set<string> set_s;
int INF=1000000;
int main(){
	string x,p;
	cin>>x;
	cin>>p;
	int a=size(x);
	int ans=0;
	for(int i=0;i<a;i++){
		if(x[i]==p[0]){
			if(i+size(p)<a){
				for(int e=i;e<size(p)+i;e++){
					if(x[e]==p[e-i]) ans++;
					else{
						ans=0;
						break;
					}
					if(ans==size(p)){
						cout<<"Yes"<<endl;
						return 0;
					}
				}
			}
			else{
				for(int e=i;e<size(p)+a;e++){
					if(e<a){
						if(x[e]==p[e-i]) ans++;
						else{
							ans=0;
							break;
						}
					}
					else{
						if(x[e-a]==p[e-i]) ans++;
						else{
							ans=0;
							break;
						}
					}
					if(ans==size(p)){
						cout<<"Yes"<<endl;
						return 0;
					}
				}
			}
		}
	}
	cout<<"No"<<endl;
}