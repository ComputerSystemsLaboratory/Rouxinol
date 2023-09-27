#include <cstdio>
#include <string.h>

int s[2000001];
int size = 0;

int Swap(int* S,int loc){
	if(loc > 0 && S[loc] > S[(loc-1)/2]){
		int tmp = S[loc];
		S[loc] = S[(loc-1)/2];
		S[(loc-1)/2] = tmp;
		return Swap(S,(loc-1)/2);
	}
	return loc;
}

int SwapRev(int* S,int loc){
	if(loc*2+2 < size){
		int mxi;
		if(S[loc*2+1] > S[loc*2+2]){
			mxi = loc*2+1;
		}
		else{
			mxi = loc*2+2;
		}
		if(S[mxi] > S[loc]){
			int tmp = S[mxi];
			S[mxi] = S[loc];
			S[loc] = tmp;
			return SwapRev(S,mxi);
		}
	}
	else if(loc*2+1 < size){
		if(S[loc*2+1] > S[loc]){
			int tmp = S[loc*2+1];
			S[loc*2+1] = S[loc];
			S[loc] = tmp;
		}
		return loc;
	}
	else{
		return loc;
	}
}

int Insert(int* S,int k){
	S[size] = k;
	Swap(S,size);
	size++;
	return k;
}

int ExtractMax(int* S){
	int ret = S[0];
	S[0] = S[size-1];
	size--;
	SwapRev(S,0);
	return ret;
}

int main(){
	char cmd[32];
	int v;
	while(scanf("%s",cmd) != EOF){
		if(strcmp(cmd,"insert") == 0){
			scanf("%d",&v);
			Insert(s,v);
		}
		else if(strcmp(cmd,"extract") == 0){
			printf("%d\n",ExtractMax(s));
		}
		else if(strcmp(cmd,"end") == 0){
			break;
		}
	}
	return 0;
}

