#include <cstdio>
#include <vector>
#include <algorithm>
#include <climits>
#include <string>

using namespace std;

int n;
vector<pair<string, int> > S, T;

int partition(int p, int r)
{
    int x=S[r].second;
    int i=p-1;
    for(int j=p; j<r; j++){
        if(S[j].second<=x){
            i++;
            swap(S[i], S[j]);
        }
    }
    swap(S[i+1], S[r]);
    return i+1;
}

void quickSort(int p, int r)
{
    if(p<r){
        int q=partition(p, r);
        quickSort(p, q-1);
        quickSort(q+1, r);
    }
}


int merge(int left, int mid, int right)
{
    int n1=mid-left, n2=right-mid;
    vector<pair<string, int> > L(n1+1), R(n2+1);
    for(int i=0; i<n1; i++){
        L[i]=T[left+i];
    }
    L[n1]=make_pair("", INT_MAX);
    for(int i=0; i<n2; i++){
        R[i]=T[mid+i];
    }
    R[n2]=make_pair("", INT_MAX);
 
    int cnt=0;
    for(int i=0, j=0, k=left; k<right; k++){
        if(L[i].second<=R[j].second){
            T[k]=L[i];
            i++;
        } else{
            T[k]=R[j];
            j++;
        }
        cnt++;
    }
    return cnt;
}
 
int mergeSort(int left, int right)
{
    if(left+1<right){
        int mid=(left+right)/2;
        int c1=mergeSort(left, mid);
        int c2=mergeSort(mid, right);
        return merge(left, mid, right)+c1+c2;
    }
    return 0;
}

int main()
{
    scanf("%d", &n);
    S=vector<pair<string, int> >(n);
    for(auto &it : S){
        char buf[8]; int d;
        scanf("%s %d", buf, &d);
        it=make_pair(buf, d);
    }
    copy(S.begin(), S.end(), back_inserter(T));
    mergeSort(0, n);
    quickSort(0, n-1);
    if(S==T){
        printf("Stable\n");
    } else{
        printf("Not stable\n");
    }
    for(auto &it : S){
        printf("%s %d\n", it.first.c_str(), it.second);
    }
    return 0;
}