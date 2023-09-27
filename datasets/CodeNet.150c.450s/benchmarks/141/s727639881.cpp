#include <iostream>
#include <algorithm>
#include <vector>
#include <cstdio>
#include <string>
#include <set>
#include <map>
#include <queue>
#include <stack>
#include <cmath>
#include <functional>
#include <numeric>
#define fi first
#define se second
using namespace std;
bool value(int y,int x,int R,int C){return 0<=y&&y<R&&0<=x&&x<C;}
typedef pair<int,int> pii;
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long > vll;
typedef vector< vi > vvi;
double pie=acos(-1);
int INF=10000009;
int dx[4] = { 0,-1,0,1 };
int dy[4] = { -1,0,1,0 };
double det(double x1,double y1,double x2,double y2){
	return x1*y2-x2*y1;
}
int main() {
	long double s1,t1,s2,t2,s3,t3,sp,tp;
	while(true){ 
		cin>>s1>>t1>>s2>>t2>>s3>>t3>>sp>>tp;
		if (cin.eof())break;
		double X=det(s1-sp,t1-tp,s2-sp,t2-tp);
		double Y=det(s2-sp,t2-tp,s3-sp,t3-tp);
		double Z=det(s3-sp,t3-tp,s1-sp,t1-tp);		
		if((X>0&&Y>0&&Z>0)||(X<0&&Y<0&&Z<0)){
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}
	}	
}