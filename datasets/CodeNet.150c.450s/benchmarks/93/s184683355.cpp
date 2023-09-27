#include<bits/stdc++.h>
using namespace std;

struct card {
    char suit;
    int val;
};

void merge(struct card a[],int left,int mid,int right){
    int l_side = mid - left;
    int r_side = right - mid;
    int i = 0,j = 0;
    struct card l[l_side + 1],r[r_side + 1];
    
    for(i = 0;i<l_side;i++){
        l[i] = a[left + i];
    }
    
    for(i = 0;i<r_side;i++){
        r[i] = a[mid + i];
    }
    l[l_side].val = 2000000000;
    r[r_side].val = 2000000000;
    
    i = 0;
    j = 0;
    
    for(int k = left;k<right;k++){
        if(l[i].val <=r[j].val){
            a[k] = l[i];
            i++;
        }else{
            a[k] = r[j];
            j++;
        }
    }
}

void mergesort(struct card a[],int l,int r){
    if(l + 1 < r){
        int mid = (l + r) / 2;
        mergesort(a,l,mid);
        mergesort(a,mid,r);
        merge(a,l,mid,r);
    }
}

int partition(struct card a[],int p,int r){
    struct card t,x;
    x = a[r];
    int i = p - 1;
    for(int j = p;j < r;j++){
        if(a[j].val <= x.val){
            i++;
            t = a[i],a[i] = a[j],a[j] = t;
        }
    }
    t = a[i + 1],a[i + 1] = a[r],a[r] = t;
    return i + 1;
}

void quicksort(struct card a[],int left,int right){
    if(left < right){
        int q = partition(a,left,right);
        quicksort(a,left,q - 1);
        quicksort(a,q + 1,right);
    }
}

int main(){
    int n,v,i;
    struct card a[100000],b[100000];
    char S[10];
    bool stable = true;
  
    scanf("%d", &n);
    
  for( i = 0;i < n;i++){
    scanf("%s %d",S,&v);
    a[i].suit = b[i].suit = S[0];
    a[i].val = b[i].val = v;
  }
  
  mergesort(a,0,n);
  quicksort(b,0,n - 1);
  for(i = 0;i < n;i++){
    if(a[i].suit != b[i].suit)stable = false;
  }
  if(stable)printf("Stable\n");
  else printf("Not stable\n");
  for(i = 0;i < n;i++){
    printf("%c %d\n",b[i].suit ,b[i].val);
  }
}
