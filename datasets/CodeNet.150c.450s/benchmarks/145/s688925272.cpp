#include<iostream>
#include<algorithm>
#include<string>
#include<cstring>
#include<cstdio>
#include<cstdlib>
#include<vector>
#include<queue>
#include<stack>
#include<complex>
#include<utility>
#include<cmath>
#include<map>
#define loop(i,a,b) for(int i=a;i<b;i++)
#define rep(i,a) loop(i,0,a)
#define pi acos(-1)
#define all(v) v.begin(),v.end()
using namespace std;

const double eps = 1e-8;
const double INF = 1e12;

typedef pair<int,int> P;
typedef double Real;
typedef complex<Real> Point;
typedef vector<Point> G;

double cross(const Point& a,const Point& b){//calculate ad-bc(vector product)
	return imag(conj(a)*b);
}

struct L:public vector<Point>{//line data
	L(const Point &a,const Point &b){
		push_back(a);
		push_back(b);
	}
};


int main(){
	string s;
	getline(cin,s);
	int count=0;
	map<string,int> mp;
	vector<string> vec;
	string lenmax="";
	rep(i,s.size()+1){
		if(i==s.size()){
			string sub=s.substr(count,i+1-count);
			count=i+1;
			vec.push_back(sub);
			mp[sub]=0;
			if(lenmax.size()<sub.size()){
				lenmax=sub;
			}
		}else if(s[i]==' '){
			string sub=s.substr(count,i-count);
			count=i+1;
			vec.push_back(sub);
			mp[sub]=0;
			if(lenmax.size()<sub.size()){
				lenmax=sub;
			}
		}
	}
	rep(i,vec.size()){
		mp[vec[i]]++;
	}
	string fremax="";
	rep(i,vec.size()){
		if(mp[vec[i]]>mp[fremax]){
			fremax=vec[i];
		}
	}
	cout<<fremax<<" "<<lenmax<<endl;
	return 0;
}