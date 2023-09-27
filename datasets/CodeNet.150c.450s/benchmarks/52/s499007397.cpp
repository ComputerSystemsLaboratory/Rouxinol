#include <iostream>
#include <iomanip>
#include <vector>
#include <cmath>
#include <algorithm>
#include <string>
#define shosu(x) fixed<<setprecision(x)
using namespace std;
typedef pair<int,int> P;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int,P> pip;
const int inf=(1<<31)-1;

int n;
vi num;

int main(){
	while(cin>>n){
		if(n) num.push_back(n);
		else{
			cout<<num.back()<<endl;
			num.pop_back();
		}
	}
}