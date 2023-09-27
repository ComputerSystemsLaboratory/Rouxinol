#include <iostream>
 
int main() {
    int r,c,i;
	std::cin >> r >> c;
    int list[101][101]={0};
    for(int a=0;a<r;a++){
        for(int b=0;b<c;b++){
            std::cin >> i;
            list[a][b]=i;
            list[a][c]=list[a][c]+i;
            list[r][b]=list[r][b]+i;
            list[r][c]=list[r][c]+i;
        }
    }
    for(int d=0;d<=r;d++){
        for( int e=0;e<=c;e++){
            if(e<c){
            std::cout << list[d][e] <<" ";
            }else{
            std::cout << list[d][e];}
        }
        std::cout << std::endl;
    }
	return 0;
}