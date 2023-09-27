#include<iostream>
#include<vector>

std::vector<int> tmp;

int merge_sort(std::vector<int> &S,int left,int right){
	if(left>=right) return 0;
	int cnt=0;
	int mid=(right+left)/2;
	cnt+=merge_sort(S,left,mid);
	cnt+=merge_sort(S,mid+1,right);
	for(int i=left;i<=mid;i++)
		tmp[i]=S[i];
	for(int i=mid+1;i<=right;i++)
		tmp[right+mid+1-i]=S[i];
	int i=left,j=right;
	for(int k=left;k<=right;k++){
		if(tmp[i]>tmp[j]){
			S[k]=tmp[j--];
		}else{
			S[k]=tmp[i++];
		}
		cnt++;
	}
	return cnt;
}

int main(void){
	int n;
	std::cin>>n;
	std::vector<int> S(n);
	tmp.resize(n);
	for(int i=0;i<n;i++)
		std::cin>>S[i];
	int cnt_cmp=merge_sort(S,0,S.size()-1);
	for(int i=0;i<S.size();i++)
		std::cout<<(i?" ":"")<<S[i];
	std::cout<<std::endl<<cnt_cmp<<std::endl;

	return 0;
}

