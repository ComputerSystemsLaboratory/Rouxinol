//include
//------------------------------------------
#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <cctype>
#include <string>
#include <cstring>
#include <ctime>

using namespace std;

//debug
#define DUMP(x)  cerr << #x << " = " << (x) << endl;
#define DEBUG(x) cerr << #x << " = " << (x) << " (L" << __LINE__ << ")" << " " << __FILE__ << endl;

int height[1500001]={0};
int width[1500001]={0};

int main(){
    int h[1501],w[1501];
    int N,M,result=0;

    while(cin >> N >> M && N){
	for(int i=0; i<1500001; ++i){
	    height[i]=0;width[i]=0;
	}
	for(int i=0; i<N; ++i) cin >> h[i];
	for(int i=0; i<M; ++i) cin >> w[i];
	int temp=0;
	for(int i=0; i<N; ++i){
	    temp = h[i];
	    height[temp]++;
	    for(int j=i+1; j<N; ++j){
		temp += h[j];
		height[temp]++;
	    }
	}
	temp =0;
	for(int i=0; i<M; ++i){
	    temp = w[i];
	    width[temp]++;
	    for(int j=i+1; j<M; ++j){
		temp += w[j];
		width[temp]++;
	    }
	}
	int count =0;
	for(int i=1; i<1500001; ++i){
	    count += height[i]*width[i];
//	    if(height[i]!=0 || width[i]!=0)
//		cout <<i <<":"<< height[i] << ":" << width[i] << endl;
	}
	
	cout << count << endl;
	//     height=0;
	//     for(int j=i; j<1500; ++j){
	// 	height += h[j];
	// 	for(int k=0; k<1500; ++k){
	// 	    width=0;
	// 	    for(int l=0; l<1500; ++l){
	// 		width += w[l];
	// 		if(height==width)
	// 		    result++;
	// 		else if(height < width)
	// 		    break;
	// 	    }
	// 	}
	//     }
	// }
	// cout << result << endl;
	// height=0;width=0;result=0;
	// for(int i=0; i<N; ++i) h[i]=0;
	// for(int i=0; i<M; ++i) w[i]=0;

    }
    return 0;
}