#include <iostream>
#include <stdio.h>

using namespace std;

int n,k;

int findTrackMax(int stackWeight[]){
	int max = 0;
	for(int i = 0; i < k; i++){
		if(max < stackWeight[i]){
			max = stackWeight[i];
		}
	}
	return max;
}

bool pileW(int w[],int p){

	int trial[k],index_w=0,index_track=0,tmp=0;

	for(int i = 0; i < k; i++){
		trial[i] = 0;
	}

	while(true){
		if(tmp + w[index_w] <= p){
			tmp += w[index_w++];
		}else{
			trial[index_track++] += tmp;
			tmp = 0;
		}

		if(index_track == k-1){
			for(int i = index_w; i < n; i++){
				trial[index_track] += w[i];
			}
			return (trial[index_track] <= p);
		}else if(index_w == n-1){
			return (w[index_w] <= p);
		}
	}
}

int main(){

	scanf("%d %d",&n,&k);
	int w[n],guessPMax[k];

	for(int i = 0; i < n; i++){
		scanf("%d",&w[i]);
	}
	for(int i = 0; i < k; i++){
		guessPMax[i] = 0;
	}

	if(k == 1){
		int onetrack;
		for(int i = 0; i < n; i++){
			onetrack += w[i];
		}
		printf("%d\n",onetrack);
	}else{

		int p_trial_number;
		if(n >= k){
			if(n%2 == 0 && k%2 == 0){
				p_trial_number = n/k;
			}else{
				p_trial_number = n/k + 1;
			}
		}else{
			p_trial_number = 1;
		}

		int k_trial = 0,n_trial = 0;
		while(true){
			for(int i = 0; (i < p_trial_number && n_trial < n-1);i++){
				guessPMax[k_trial] += w[n_trial++];
			}
			k_trial++;
			if(k_trial == k-1){
				for(int i = n_trial;i < n;i++){
					guessPMax[k_trial] += w[i];
				}
				break;
			}else if(n_trial == n-1){
				guessPMax[k-1] += w[n_trial];
				break;
			}
		}

		int right = findTrackMax(guessPMax),left = n/k,m;

		if(right - left == 1){
			if(pileW(w,left)){
				right = left;
			}
		}else{
			while(right - left > 1){
				m = (left + right)/2;
				if(pileW(w,m)){
					right = m;
				}else{
					left = m;
				}
			}
		}
		printf("%d\n",right);
	}
}