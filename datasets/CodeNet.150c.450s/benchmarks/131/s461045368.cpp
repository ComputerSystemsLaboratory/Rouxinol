#include<bits/stdc++.h>
using namespace std;


void ISortMax(int a[], int L){
	int i, j, v, ans;
	for(i = 1; i < L; i++){
		j = i - 1;
		v = a[i];
		while(j >= 0 && a[j] < v){
			a[j + 1] = a[j];
			j--;
		}
		a[j + 1] = v;
	}
}

void ISortMin(int a[], int L){
	int i, j, v, ans;
	for(i = 1; i < L; i++){
		j = i - 1;
		v = a[i];
		while(j >= 0 && a[j] > v){
			a[j + 1] = a[j];
			j--;
		}
		a[j + 1] = v;
	}
}

int hennkann(int a[], int L){
	int ans = 0, i = 0;for(int j = 0; j < L; j++)
	while(L){
		ans += pow(10, L - 1) * (a[i++]);
		L--;
	}
	return ans;
}

void foo(int a[], int b[], int L){
	int temp, temp2,  i = 0;
	temp = hennkann(a, L) - hennkann(b, L);
	
	while(L){
		temp2 = (temp/(int)pow(10, L - 1))%10;
		a[i] = temp2;
		b[i] = temp2;
		i++; L--;
	}
}

int cheak(int A[], int k){
	for(int i = 0; i < k; i++){
		if(A[i] == A[k]) return i;
	}
	return -1;
}

int main(){
	string str;
	int L, f, A[30], temp;
	int i, j, k;
	
	while(1){
		int a[10] = {}, b[10] = {}; j = 0;
		A[0] = 0;
		cin>>str>>L;
		if(str == "0" && L == 0) break;
		for(i = L - (int)str.size(); i < L;i++){
			a[i] = str[j] - '0';
			b[i] = str[j++] - '0';
		}
		
		k = 0;
		while(1){
			
			A[k] = hennkann(a, L);
			temp = cheak(A, k);
			if(temp != -1){
				break;
			}
			ISortMax(a, L);
			ISortMin(b, L);
			foo(a, b, L);
			k++;
			
		}
		
		cout<<temp<<" "<<A[temp]<<" "<<k - temp<<endl;
		
	}
	return 0;
}
