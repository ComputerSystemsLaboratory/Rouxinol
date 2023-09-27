#include <iostream>
#include <vector>

std::vector<int>::iterator top;

int merge(	std::vector<int>::iterator left,
			std::vector<int>::iterator mid, 
			std::vector<int>::iterator right){
	
	std::vector<int> L(mid-left);
	std::vector<int> R(right-mid);

	for(int i=0; i<L.size(); i++) L[i] = *(left+i);
	for(int i=0; i<R.size(); i++) R[i] = *(mid+i);

	R.push_back(1000000000);
	L.push_back(1000000000);
	int ri=0,li=0;
	int cnt = 0;
	for(std::vector<int>::iterator k=left; k<right; k++){
		if(L[li]>R[ri]){
			*k = R[ri];
			ri += 1;
		}else{
			*k = L[li];
			li += 1;
		}
		cnt += 1;
	}
	return cnt;
}

int mergeSort(	std::vector<int>::iterator left, 
				std::vector<int>::iterator right ){
	int cnt = 0;

	if(right>left+1){	
		int num = right - left;
		std::vector<int>::iterator mid = left + num/2;
		cnt += mergeSort(left,mid);
		cnt += mergeSort(mid,right);
		cnt += merge(left,mid,right);
	}
	return cnt;

}

int main(int argc, char const *argv[]){
	int n,cnt;
	std::cin >> n;
	std::vector<int> S(n);
	for(int i=0; i<n; i++) std::cin >> S[i];
	top = S.begin();
	cnt = mergeSort(S.begin(),S.end());

	for(int i=0; i<n; i++) std::cout << S[i] << ((i<n-1)?" ":"\n");
	std::cout << cnt << std::endl;

	return 0;
}
