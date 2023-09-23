#include <iostream>
#include <stdio.h>
#define INF 10000
using namespace std;

struct edge {
    int from, to, cost;
};

edge es[100];
int d[11];
int n,maxV=0;

int shortest_path(int s){
    int sum=0;
    for(int i=0;i<maxV+1;i++){
        d[i] = INF;
    }
    d[s] = 0;
    while(1){
        bool update = false;
        for(int i=0;i<2*n;i++){
            edge e = es[i];
            if(d[e.from] != INF && d[e.to] > d[e.from] + e.cost){
                d[e.to] = d[e.from] + e.cost;
                update = true;
            }
        }
        if(!update){
            break;
        }
    }
    for(int i=0;i<maxV+1;i++){
        if(d[i] != INF){
        	// cout << i << " " << d[i] << endl;
            sum += d[i];
        }
    }
    return sum;
}

int main(void){
    
    while(cin >> n && n){
    	maxV = 0;
        int a, b, c, tmp, min,sum2=100000;
        for(int i=0;i<n;i++){
            cin >> a >> b >> c;
            es[i].from = a;
            es[i].to = b;
            es[i].cost = c;

            es[i+n].from = b;
            es[i+n].to = a;
            es[i+n].cost = c;
            
            if(maxV < b){
           		maxV = b;
           	}
           	if(maxV < a){
           		maxV = a;
           	}
           	
        }
        //??????????????°?????????
        for(int i=0;i<maxV+1;i++){
            int tmp = shortest_path(i);
            // cout << tmp << endl;
            if(sum2 > tmp){
                sum2 = tmp;
                min = i;
            }
        }
        cout << min << " " << sum2 << endl;
    }
    return 0;
}