#include <iostream>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
#include <map>
#include <cmath>
#include <string>
#include <sstream>
#include <iomanip>
#include <complex>
using namespace std;
 
#define ll long long
#define vvi vector< vector<int> >
#define vi vector<int>
#define All(X) X.begin(),X.end()
#define FOR(i,a,b) for(int i=(int)(a);i<(int)(b);i++)
#define REP(i,n) for(int i=0;i<(int)(n);i++)
#define pb push_back
#define pii pair<int,int>
#define mp make_pair
ll gcd(ll a,ll b){return b?gcd(b,a%b):a;}
ll lcm(ll a,ll b){return a/gcd(a,b)*b;}

class dice{
public: 
		int surface[6];
	void setsurface(int a,int b,int c,int d,int e,int f){
		surface[0] = a;
		surface[1] = b;
		surface[2] = c;
		surface[3] = d;
		surface[4] = e;
		surface[5] = f;
	}
	void load(){
		cout << surface[0] << endl;
	}
	void roll(char d){
		int n;
		if(d == 'E'){
			n = surface[5];
			surface[5] = surface[2];
			surface[2] = surface[0];
			surface[0] = surface[3];
			surface[3] = n;
		}
		if(d == 'W'){
			n = surface[3];
			surface[3] = surface[0];
			surface[0] = surface[2];
			surface[2] = surface[5];
			surface[5] = n;
		}
		if(d == 'N'){
			n = surface[4];
			surface[4] = surface[0];
			surface[0] = surface[1];
			surface[1] = surface[5];
			surface[5] = n;
		}
		if(d == 'S'){
			n = surface[5];
			surface[5] = surface[1];
			surface[1] = surface[0];
			surface[0] = surface[4];
			surface[4] = n;
		}
	}
	void loade(){
		cout << surface[2] << endl;
	}
	void spinr(){
		int n;
		n = surface[3];
		surface[3] = surface[1];
		surface[1] = surface[2];
		surface[2] = surface[4];
		surface[4] = n;
	}
	void setup(int n){
		if(surface[0] != n){
			for (int i = 0; i < 3; ++i)
			{
				this->roll('E');
				if(surface[0] == n)break;
			}
			if(surface[0] != n){
				for (int i = 0; i < 3; ++i){
					this->roll('N');
					if(surface[0] == n)break;
				}
			}
		}
	}
	void setfront(int n){
		if(surface[1] != n){
			for (int i = 0; i < 3; ++i){
				this->spinr();
				if(surface[1] == n)break;
			}
		}
	}
};

int main(){
	dice dice1;
	int n[6];
	int m = 0;
	int x[2][24] = {0};
	for (int i = 0; i < 6; ++i)
	{
		cin >> n[i];
	}
	dice1.setsurface(n[0],n[1],n[2],n[3],n[4],n[5]);
	cin >> m;
	for(int i = 0; i < m; i++){
		cin >> x[0][i] >> x[1][i];
	}
	for(int i = 0; i < m; i++){
		dice1.setup(x[0][i]);
		dice1.setfront(x[1][i]);
		dice1.loade();
	}
}