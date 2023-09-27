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

//?????§?????????p??§???????????????????????????
bool pileW(int w[],int p){

	int trial[k];	//???????????????k??°
	for(int i = 0; i < k; i++){
		trial[i] = 0;
	}
	int index_w = 0;
	int index_track = 0;
	int tmp = 0;

	if(k == 1){	//1??°?????´???
		for(int i = 0; i < n; i++){
			trial[0] += w[i];
		}
		return (trial[0] <= p);
	}

	while(true){	//?????????????????????
		if(tmp + w[index_w] <= p){
			tmp += w[index_w++];
		}else{	//?¬???????????????¢????????????????????§???????????¨???????????¨
			trial[index_track++] += tmp;	//??????
			tmp = 0;
		}

		if(index_track == k-1){	//?¬???????????????????????????????????????§?????¨???p??\??????????????§????????????
			for(int i = index_w; i < n; i++){	//?????????????????¨?????????????????????????????????
				trial[index_track] += w[i];
			}
			return (trial[index_track] <= p);	//????????????????????????????????????p??\???????????????
		}else if(index_w == n-1){	//?????????????????????????????????????????????
			return (w[index_w] <= p);	//???????????????????????§???????????\???????????????(???????????????????????????????????????????????°????????????)
		}
	}
}

int main(){

	scanf("%d %d",&n,&k);

	int w[n];
	int guessPMax[k];

	for(int i = 0; i < n; i++){
		scanf("%d",&w[i]);
	}

	for(int i = 0; i < k; i++){
		guessPMax[i] = 0;
	}


	int p_trial_number;	//?????????????????????(????????????????????????)
	if(n >= k){
		if(n%2 == 0 && k%2 == 0){
			p_trial_number = n/k;
		}else{
			p_trial_number = n/k + 1;
		}
	}else{	//??????????????°??????????????????????????°???????????§????????´???
		p_trial_number = 1;
	}

	//k*p > n??¨?????? p??????n/k????????§????????§
	int k_trial = 0,n_trial = 0;
	while(true){	//??????????????????????????????????????°??§????????§??????

		for(int i = 0; (i < p_trial_number && n_trial < n-1);i++){
			guessPMax[k_trial] += w[n_trial++];
		}
		k_trial++;
		//?????????????????????????????????????????¨??????
		if(k_trial == k-1){
			for(int i = n_trial;i < n;i++){
				guessPMax[k_trial] += w[i];
			}
			break;
		}else if(n_trial == n-1){	//???????????????
			guessPMax[k-1] += w[n_trial];	//????????????????????????????????????????????????
			break;
		}
	}

	int right = findTrackMax(guessPMax);	//???????????§?????????(?????????????????§?????????)

	int left = n/k;	//?????§?????????????£????????°???????n/k??§????????????

	if(left == right){
		//Do nothing
	}else if(right - left == 1){
		if(pileW(w,left)){
			right = left;
		}
	}else{
		int m;
		while(right - left > 1){
			if((left + right)%2 == 1){
				m = (left + right+1)/2;
			}else{
				m = (left + right)/2;
			}
			if(pileW(w,m)){
				right = m;
			}else{
				left = m;
			}
		}
	}
	printf("%d\n",right);
}