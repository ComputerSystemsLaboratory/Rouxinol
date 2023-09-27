#include<iostream>
#include<string>
int cost[1001][1001];

int min(int k,int l){
    if(k>l) return l;
    else return k;
}

int min3(int k,int l,int m){
    int n = min(k,l);
    return min(n,m);
}

void pre(std::string& s1,std::string& s2,int size1,int size2){
    for(int i=0;i<=size1;i++){
        cost[i][0] = i;
    }
    for(int i=0;i<=size2;i++){
        cost[0][i] = i;
    }
}

void ED(std::string& s1,std::string& s2,int size1,int size2,int i,int j){
    if(s1[i-1] == s2[j-1]){
        cost[i][j] = cost[i-1][j-1];
    }else{
        cost[i][j] = min3(cost[i][j-1],cost[i-1][j],cost[i-1][j-1])+1;
    }
}

int main(){
    std::string s1,s2;
    std::cin >> s1;
    std::cin >> s2;
    int size1 = s1.size(),size2 = s2.size();
    pre(s1,s2,size1,size2);
    for(int i=1;i<=size1;i++){
        for(int j=1;j<=size2;j++){
            ED(s1,s2,size1,size2,i,j);
        }
    }
    
    /*for(int i=0;i<=size1;i++){
        for(int j=0;j<=size2;j++){
            std::cout << cost[i][j] << ' ';
        }
        std::cout << '\n';
    }*/
    std::cout << cost[size1][size2] << '\n';
    
    return 0;
}
    

