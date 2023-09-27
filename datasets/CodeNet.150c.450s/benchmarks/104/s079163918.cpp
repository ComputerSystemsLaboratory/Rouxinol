#include<iostream>
#include<vector>
#include<utility>
#include<cstdio>

int main(void){
    int w,n;
    std::cin>>w;
    std::vector<int> state(w+1);
    for(int i=1;i<=w;i++) state[i]=i;
    std::cin>>n;
    int a,b;
    for(int i=0;i<n;i++){
        scanf("%d,%d",&a,&b);
        std::swap(state[a],state[b]);
    }
    for(int i=1;i<=w;i++) std::cout<<state[i]<<std::endl;
    return 0;
}
