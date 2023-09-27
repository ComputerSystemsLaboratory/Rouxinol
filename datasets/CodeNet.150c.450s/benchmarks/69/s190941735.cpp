#include <iostream>
#include <stack>
#include <tuple>
using namespace std;

int main() {
	int n, balls[10]; cin >> n;
    while(n--){
        for(int i = 0; i < 10; i++){
            cin >> balls[i];
        }
        
        bool sortable = false;
        stack<tuple<int, int, int> > states;
        
        states.push(make_tuple(0,0,0));
        while(!states.empty()){
        	tuple<int, int, int> now = states.top();
        	states.pop();
        	
        	int idx = get<0>(now);
        	if(idx < 10){
        		if(get<1>(now) < balls[idx]){
        			if(idx == 9){
        				sortable = true; break;
        			}
        			states.push(make_tuple(idx+1,balls[idx],get<2>(now)));
        		}
        		if(get<2>(now) < balls[idx]){
        			if(idx == 9){
        				sortable = true; break;
        			}
        			states.push(make_tuple(idx+1,get<1>(now),balls[idx]));
        		}
        	}        	
        }
         
        if(sortable) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}