#include<stdio.h>

int merge(int a[],int temp[],int left,int middle,int right){
    int count = 0;
    int i = left, j = middle ; 
    for(int k = left; k <=right; k++){
        count++;
       //left exists and (right null or <)
       if(i<middle&&(j>right||a[i]<a[j])){
            temp[k] = a[i++];
       }else {
             temp[k]= a[j++];
        }
    }
    //copy back
    for(int k = left; k<=right; k++){
        a[k] = temp[k];
    }
    return count;
 
}
//divide until 1 and then merge
//return count
int divide(int a[],int temp[], int left, int right) {
int count = 0;
     //case
    if(left>=right) return count;//can not be the same
    
    int middle = (left+right)/2;
    //divide
    count = divide(a, temp, left, middle);//left count
    count += divide(a, temp, middle+1, right);//left count

    count = count + merge(a, temp, left, middle+1, right);
     return count;
}

//merge sort
int main(){
   int n = 0;
   scanf("%d", &n);
   int a[n+1];
   int count = 0;
   int temp[n+1];
   for(int i = 0; i<n; i++){
      scanf("%d",&a[i]);
   }
   count = divide(a, temp, 0, n-1);
int i = 0;
   for(i = 0; i<n-1; i++){
      printf("%d ",a[i]);
   }
   printf("%d\n",a[i]);
   printf("%d\n",count);
   
   return 0;
}
