#include <iostream>


typedef struct {
	char design;
	int num;
} card;


void merge(card *A, int left, int mid, int right){
	int n1,n2,i,j,k;
	card *L, *R;
	n1 = mid - left;
	n2 = right - mid;
	L = new card[n1+1];
	R = new card[n2+1];

	for(i=0;i<n1;i++){
		L[i] = A[left+i];
	}
	for(i=0;i<n2;i++){
		R[i] = A[mid+i];
	}
	
	L[n1].num = 1000000000;
	R[n2].num = 1000000000;
	i=0;
	j=0;
	for (k=left; k<right;k++){
		if(L[i].num <= R[j].num){
			A[k] = L[i];
			i++;
		}
		else{
			A[k]=R[j];
			j++;
		}
	}
	delete []L;
	delete []R;
}


void mergeSort(card *A, int left, int right){
	int mid;
	if(left+1 < right){
		mid = (left+right)/2;
		mergeSort(A, left, mid);
		mergeSort(A, mid, right);
		merge(A, left, mid, right);
	}
}


int partition(card *A, int p, int r){
	int i,j;
	card x;
	card temp;
	x = A[r];
	i = p-1;
	for(j=p;j<r;j++){
		if(A[j].num <= x.num){
			i++;
			temp = A[i];
			A[i] = A[j];
			A[j] = temp;
		}
	}
	temp = A[i+1];
	A[i+1] = x;
	A[r]=temp;
	return i+1;
}

void quickSort(card *A, int p, int r){
	int q;
	if(p<r){
		q = partition(A, p, r);
		quickSort(A, p, q-1);
		quickSort(A, q+1, r);
	}
}

int main(void){
	int i,n,num;
	char design;
	card *A_merge, *A_quick;

	std::cin >> n;
	
	A_merge = new card[n];
	A_quick = new card[n];
	for(i=0;i<n;i++){
		std::cin >> design >> num;
		A_merge[i].design = design;
		A_merge[i].num = num;
		A_quick[i].design = design;
		A_quick[i].num = num;
	}
	mergeSort(A_merge, 0, n);
	quickSort(A_quick, 0, n-1);
	
	for (i=0;i<n;i++){
		if (A_quick[i].design != A_merge[i].design){
			break;
		}
	}
	if (i!=n){
		std::cout << "Not stable";
	}
	else{
		std::cout << "Stable";
	}
	std::cout << std::endl;

	for(i=0;i<n;i++){
		std::cout << A_quick[i].design << " " << A_quick[i].num << std::endl;
	}
	
	delete []A_quick;
	delete []A_merge;
	return 0;
}