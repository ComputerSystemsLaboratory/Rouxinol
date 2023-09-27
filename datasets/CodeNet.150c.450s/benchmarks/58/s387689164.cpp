#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <algorithm>
#include <numeric>
#include <map>
#include <set>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <bitset>
#include <climits>
#define REP(i,n) for (int i=0;i<(n);i++)
#define FOR(i,a,b) for (int i=(a);i<(b);i++)
#define RREP(i,n) for (int i=(n)-1;i>=0;i--)
#define RFOR(i,a,b) for (int i=(a)-1;i>=(b);i--)
#define ll long long
#define ull unsigned long long
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
const int INF = 1e9;
const int MOD = 1e9 + 7;
 
using namespace std;
 
class stack{
public:
    static const int MAX_ = 10000;
    int data_[MAX_];
    int top_;
    stack():top_(0){}
    bool isEmpty(){return top_ == 0;}
    bool isFull(){return top_ >= MAX_-1;}
    void push(int x){
        if(isFull())cout << "over flow" << endl;
        else data_[++top_] = x;
    }
    int pop(){
        if(isEmpty())cout << "under flow" << endl;
        else    return data_[top_--];
        return 0;
    }
};

int calc(int a,int b,string c){
	if(c == "+")return a + b;
	else if(c == "-") return a - b;
	else if(c == "*") return a * b;
}
 
int main(){
  cin.tie(0);
  ios::sync_with_stdio(false);
	string c;
	stack st;
	while(cin>>c){
		if(c == "+" || c == "-" || c == "*"){
			st.push(calc(st.pop(),st.pop(),c));
		}else{
			st.push(atoi(c.c_str()));
		}
	}
	cout << st.pop() << endl;
  return 0;
}