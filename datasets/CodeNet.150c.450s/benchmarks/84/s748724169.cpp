#include <iostream>
using namespace std;

long long cnt = 0; //for counting num of invensions

void merge(int *a, int left, int mid, int right) {

    int nL = mid - left;
    int nR = right - mid;

    int L[nL], R[nR];

    for(int i=0; i<nL; i++) {
        L[i] = a[left + i];
    }
    for(int i=0; i<nR; i++) {
        R[i] = a[mid + i];
    }
    

    int indexL = 0, indexR = 0;
    int k = left;
    while(k<right) {

        if( indexL>=nL ) { //in case that L[] has no element
            a[k] = R[indexR]; //this is not inversion
            indexR++;
        } else if( indexR>=nR ) { //in case that R[] has no element
            a[k] = L[indexL]; //this is not inversion
            indexL++;
        } else if( L[indexL] <= R[indexR] ) {
            a[k] = L[indexL]; //this is not inversion
            indexL++;
        } else if( L[indexL] > R[indexR] ) { //actually, this condition is not needed
            a[k] = R[indexR]; //this is inversion
            indexR++;
            cnt += nL - indexL; //num of inversion = num of elements remaining in L[]
        }
        
        k++;
    }

//    //display info. about this step
//    cout << "-----\n";
//    cout << "merge(" << left << ", " << mid << ", " << right <<")" << endl;
//
//    cout << "L" << " = "; for(int i=0; i<nL; i++) {cout << L[i] << " ";} cout << endl;
//    cout << "R" << " = "; for(int i=0; i<nR; i++) {cout << R[i] << " ";} cout << endl;
//    
//    cout << "cnt = " << cnt << endl;

    return;
}


void mergeSort(int *a, int left, int right) {

    if(left+1  <  right) {
        int mid = (left + right) / 2;

        mergeSort(a, left, mid);
        mergeSort(a, mid, right);

        merge(a, left, mid, right);

    }

    return;
}


int main(void) {
    int N;
    cin >> N;

    int a[N];
    for(int i=0; i<N; i++) {
        cin >> a[i];
    }

//    //display a[] before sorting
//    cout << "a[] = ";
//    for(int i=0; i<N; i++) {
//        cout << a[i] << " ";
//    }
//    cout << endl;

    //merge sort a[]
    mergeSort(a, 0, N);

//    //display a[] after sorting
//    cout << "a[] = ";
//    for(int i=0; i<N; i++) {
//        cout << a[i] << " ";
//    }
//    cout << endl;
    

//    cout << "Num of inversions = ";
    cout << cnt << endl;
    
    return 0;
}