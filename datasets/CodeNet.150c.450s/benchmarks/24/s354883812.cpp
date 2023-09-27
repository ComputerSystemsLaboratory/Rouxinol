/*
  Input: the input contains many data sets. First line in 
each data set are two integers: N (no of intervals) and M 
(amount of funding). There will be N lines ollowing the 
first line, and each line contains two integers: Di 
(distance of interval i) and Pi (level of danger of intercal
i). Imput ends when N=0, M=0 data set appears.

  Order of computation: we can compute the order of 
computation for each data set:
	3N+2N*log2(N)+MN+N => Order=4N+MN+2N*log2(N)

  The program takes 0.29 second to solve 93 cases.
*/

#include <algorithm>
#include <iostream>
#include <utility>
#include <math.h>
using namespace std;

int N, M; // N: No of intervals, M: funding
pair<int,int> PD[10010];
int main(){
	// put in data
	while (cin >> N >> M && N){
		int d, p; // d: distance, p: lv of danger
		for (int i=0; i<N; ++i){ 
		//Order=3N
			cin >> d >> p; 
			// Not sure whether this counts as 1 or 2
			PD[i] = make_pair(p, d);
		}
	// sort
		sort(PD, PD+N, greater<pair<int, int> >()); // modified
		// Order=2N*log2(N) 
		// I doubled complexity since it is a pair (not sure as well)
	// hire guards
		int index=0;
		while (M>0 && index<N){ 
		// Worst scenario:Order=MN ???actually Pmax*N...????
			if (PD[index].second != 0){
				PD[index].second--;
				M--;
			} else {
				index++;
			}
		}
	// evaluate risk
		int result=0;
		for (int i=0; i<N; ++i){
		// Order=N
			result += PD[i].first*PD[i].second;
		}	
	cout << result << endl;
	}
}