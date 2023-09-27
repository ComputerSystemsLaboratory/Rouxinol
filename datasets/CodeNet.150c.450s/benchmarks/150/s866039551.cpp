#include<iostream>
#define MAX_NUM 2000001
typedef unsigned short ushort;

int n=0;

void counting_sort(ushort A[],ushort B[],ushort max){
    //std::cout << "ソートを開始\n";
    int count[max+1];
    for(int i=0;i<=max;i++){
        count[i] = 0;
    }
    
    for(int i=1;i<=n;i++){
        count[A[i]]++;
    }
    
    for(int i=1;i<=max;i++){
        count[i] += count[i-1];
    }
    
    for(int i=n;i>0;i--){
        B[count[A[i]]] = A[i];
        count[A[i]]--;
    }
}


int main(){
    std::cin >> n;
    ushort array[MAX_NUM] = {};
    ushort s_array[MAX_NUM] = {};
    ushort max = 0;
    for(int i=1;i<=n;i++){
        std::cin >> array[i];
        if(array[i] > max) max = array[i];
    }
    
    /*std::cout << array[1];
    for(int i=2;i<=n;i++){
        std::cout << ' ' << array[i] ;
    }
    std::cout << '\n';
     */
    
    counting_sort(array,s_array,max);
    std::cout << s_array[1];
    for(int i=2;i<=n;i++){
        std::cout << ' ' << s_array[i] ;
    }
    std::cout << '\n';
    
    return 0;
}

