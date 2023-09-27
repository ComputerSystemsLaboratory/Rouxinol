#include <stdio.h>
//http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=DPL_1_D
//LIS
//got TLE with O(n*n)
/*int findNumberOfLIS(int nums[],int n) {
        int l = n;
        int lis[l];
        for(int i= 0; i<l; i++){//as the last one
            lis[i] = 1;//for 1
            for(int j = 0; j<i; j++){
                if(nums[i]>nums[j]&&lis[j]>=lis[i]){
                    lis[i] = lis[j]+1; 
                }
            }   
        }
        int res = 0;
        for(int i =0; i<l; i++){
            if(lis[i]>res)
                res = lis[i];
            
        }
        return res;  
    }*/
//binary search to find the first ele bigger than key
//return index of the ele    
int ceilindex(int sec_array[],int l,int r,int key){
	while(r-l>1){
		int m = l+(r-l)/2;
		if(sec_array[m]>=key)
			r = m;
		else l = m;
	}
	return r;
}
int findNumberOfLIS(int nums[],int n){
	int sec_array[n];
	int len;
	sec_array[0] = nums[0];
	len = 1;
	for(int i  =1; i<n; i++){
		if(nums[i]<sec_array[0])
			sec_array[0] = nums[i];
		else if(nums[i]>sec_array[len-1])
			sec_array[len++] = nums[i];
		else {
			sec_array[ceilindex(sec_array,-1,len-1,nums[i])] = nums[i];
		}
	}
	//the sec_array is not LIS: smallest elements
	/*for(int i = 0; i<len; i++){
		printf("%d ",sec_array[i]);
	}
	printf("\n");*/
	return len;
} 

int main(){
	int n;
	scanf("%d",&n);
	int nums[n];
	for(int i = 0; i<n; i++){
		scanf("%d",&nums[i]);
	}
	printf("%d\n",findNumberOfLIS(nums,n));
	return 0;
}
