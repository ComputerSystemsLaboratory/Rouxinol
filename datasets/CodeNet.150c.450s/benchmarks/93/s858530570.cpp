#include<stdio.h>
#define N 2100000000
#define M 100000

struct pair{
  char al;
  int num;
};

void merge(struct pair a[], int left, int mid, int right){
  int i, j, k, n1=mid-left, n2=right-mid;
  struct pair L[n1+1], R[n2+1];

  for(i=0;i<n1;i++) L[i]=a[left+i];
  for(i=0;i<n2;i++) R[i]=a[mid+i];
  L[n1].num=R[n2].num=N;
  i=j=0;
  for(k=left;k<right;k++){
    if(L[i].num<=R[j].num){
        a[k]=L[i++];
    }
    else{
      a[k]=R[j++];
    }
  }
}

void sort(struct pair a[], int left, int right){
  if(left+1<right){
    int mid=(left+right)/2;
    sort(a,left,mid);
    sort(a,mid,right);
    merge(a,left,mid,right);
  }
}

int partition(struct pair b[], int p,int r){
  struct pair x=b[r],n;
  int j,i=p-1;

  for(j=p;j<r;j++){
    if(b[j].num<=x.num){
      i++;
      n=b[i]; b[i]=b[j]; b[j]=n;
    }
  }
  n=b[i+1]; b[i+1]=b[r]; b[r]=n;

  return i+1;
}

void quicksort(struct pair b[], int p, int r){
  int  q;
  if(p<r){
    q=partition(b,p,r);
    quicksort(b,p,q-1);
    quicksort(b,q+1,r);
  }
}

int main(){
  int n,i,f=1;
  char c[5];
  struct pair a[M],b[M];

  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%s %d",c,&b[i].num);
    b[i].al=a[i].al=c[0];
    a[i].num=b[i].num;
  }

  sort(a,0,n);
  quicksort(b,0,n-1);

    for(i=0;i<n;i++){
      if(a[i].al != b[i].al) f=0;
    }

  if(f==1) printf("Stable\n");
  else printf("Not stable\n");

  for(i=0;i<n;i++) printf("%c %d\n",b[i].al,b[i].num);

    return 0;
}
