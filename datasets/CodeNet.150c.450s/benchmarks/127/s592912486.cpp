#define _USE_MATH_DEFINES
#define INF 100000000
#include <iostream>
#include <sstream>
#include <cmath>
#include <cstdlib>
#include <algorithm>
#include <queue>
#include <stack>
#include <limits>
#include <map>
#include <string>
#include <cstring>
#include <set>
#include <deque>
#include <bitset>
#include <list>

using namespace std;

typedef long long ll;
typedef pair <int,int> P;
typedef pair <int,P> PP;

static const double EPS = 1e-8;

const int tx[] = {0,1,0,-1};
const int ty[] = {1,0,-1,0};

int main(){
	string train;
	int num;
	cin >> num;
	while(cin >> train){

		int c=0;
		map<string,bool> table;
		for(int len=1;len<=train.size();len++){
			string front = train.substr(0,len);
			string rear = train.substr(len,train.size()-len);

			string front_rev = front;
			reverse(front_rev.begin(),front_rev.end());

			string rear_rev = rear;
			reverse(rear_rev.begin(),rear_rev.end());
			
			vector<string> v_f;
			vector<string> v_r;
			v_f.push_back(front);
			v_f.push_back(front_rev);
			v_r.push_back(rear);
			v_r.push_back(rear_rev);

			for(int i=0;i<2;i++){
				for(int j=0;j<2;j++){
					string gen1 = v_f[i] + v_r[j];
					string gen2 = v_r[j] + v_f[i];

					if(table.find(gen1) == table.end()){
						c++;
						table[gen1] = true;
					}

					if(table.find(gen2) == table.end()){
						c++;
						table[gen2] = true;
					}
				}
			}
		}

		printf("%d\n",c);
	}
}