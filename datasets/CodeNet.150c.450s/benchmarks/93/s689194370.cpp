#include <bits/stdc++.h>


#define INF 1000000001
using namespace std;

int partition(vector<pair<char,int> > &pair_array,const int p,const int r){
    int x = pair_array[r].second;
    vector<pair<char,int> >::iterator itr_i = pair_array.begin() + p;
    int counter = p;
    for(vector<pair<char,int> >::iterator itr_j = pair_array.begin() + p;itr_j != pair_array.begin()+r+1;itr_j++){
        if(itr_j->second <= x){
            swap(*itr_j,*itr_i);
            itr_i++;
            counter++;
        } 
    }
    return counter;
}

void quickSort(vector<pair<char,int> > &pair_array,int p,int r){
    if(p < r){
        int q = partition(pair_array,p,r)-1;
        quickSort(pair_array,p,q-1);
        quickSort(pair_array,q+1,r);
    }
}

void merge(vector<pair<char,int> > &A,const int left,const int mid,const int right){
    int n1 = mid - left;
    int n2 = right - mid;
    vector<pair<char,int> > L(n1+1),R(n2+1);
    for(int i = 0;i < n1;i++) L[i] = A[left + i];
    for(int i = 0;i < n2;i++) R[i] = A[mid  + i];
    L[n1].second = INF;R[n2].second = INF;
    int j = 0,k = 0;
    for(int i = left;i < right;i++){
        if(L[j].second <= R[k].second){
            A[i] = L[j];
            j++; 
        }else if(L[j].second > R[k].second){
            A[i] = R[k];
            k++;
        }
    }
}

void mergeSort(vector<pair<char,int> > &A,int left,int right){
    if(left + 1 < right){
        int mid = (left + right)/2;
        mergeSort(A,left,mid);
        mergeSort(A,mid,right);
        merge(A,left,mid,right);
    }
}


int main(){
    int len_array;
    int  temp_num,max_val = 0;
    char temp_c;
    scanf("%d",&len_array);
    
    vector<pair<char,int> > trump_array1(len_array);
    vector<pair<char,int> > trump_array2(len_array);
    
    for(int i = 0;i < len_array;i++){
        cin >> temp_c >> temp_num;
        trump_array1[i] = make_pair(temp_c,temp_num);
        trump_array2[i] = make_pair(temp_c,temp_num);
    }
    int r = len_array -1;
    mergeSort(trump_array1,0,len_array);
    quickSort(trump_array2,0,r);
    if(trump_array1 == trump_array2) printf("Stable\n");
    else printf("Not stable\n");
    for(auto itr = trump_array2.begin();itr!=trump_array2.end();itr++){
        printf("%c %d\n",itr->first,itr->second);
    }
    return 0;   
}

