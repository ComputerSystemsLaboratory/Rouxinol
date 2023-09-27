#include<bits/stdc++.h>
#define INF 1001001001

struct card{
    std::string str;
    int num;
};

int partition(std::vector<card>& A, int p, int r){
    card tmp;
    int x = A[r].num;
    int i = p - 1;
    for(int j = p; j < r; j++){
        if(A[j].num <= x){
            i++;
            tmp = A[i];
            A[i] = A[j];
            A[j] = tmp;
        }
    }
    tmp = A[i+1];
    A[i+1] = A[r];
    A[r] = tmp;
    return i+1;
}

void quickSort(std::vector<card>& A, int p, int r){
    if(p < r){
        int q = partition(A, p, r);
        quickSort(A, p, q-1);
        quickSort(A, q+1, r);
    }
}

void merge(std::vector<card>&A, int left, int mid, int right){
    int n1 = mid - left;
    int n2 = right - mid;
    std::vector<card> L(n1+1);
    std::vector<card> R(n2+1);
    for(int i = 0; i < n1; i++){
        L[i] = A[left + i];
    }
    for(int i = 0; i < n2; i++){
        R[i] = A[mid + i];
    }
    L[n1].num = INF;
    R[n2].num = INF;
    int i = 0;
    int j = 0;

    for(int k = left; k < right; k++){
        if(L[i].num <= R[j].num){
            A[k] = L[i];
            i++;
        }else{
            A[k] = R[j];
            j++;
        }
    }
    
}

void mergeSort(std::vector<card>&A, int left, int right){
    if(left + 1 < right){
        int mid = (left + right) / 2;
        mergeSort(A, left, mid);
        mergeSort(A, mid, right);
        merge(A, left, mid, right);
    }
}



int main(void){
    int n;
    bool flag = true;
    std::cin >> n;
    std::vector<card> A(n), B(n);
    char str;
    int num;
    
    for(int i = 0; i < n; i++){
        std::cin >> str >> num;
        A[i].str = str;
        A[i].num = num;
    }
    
    B = A;

    quickSort(A, 0, n-1);
    mergeSort(B, 0, n);
    for(int i = 0; i < n; i++){
        if(A[i].str != B[i].str){
            std::cout << "Not stable" << std::endl;
            flag = !flag;
            break;
        }
    }
    if(flag){
        std::cout << "Stable" << std::endl;
    }

    
    for(int i = 0; i < n; i++){
        std::cout << A[i].str << " " << A[i].num << std::endl;
    }
    
    
    return 0;
}
