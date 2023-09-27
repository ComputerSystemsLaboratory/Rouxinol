#include <iostream>
#include <vector>

int main(){
    int n;
    std::cin >> n;
    std::vector<int> Adj[n];
    //input_graph
    int u, k, v;
    for(int i=0; i<n; i++){
        std::cin >> u >> k;
        for(int j=0; j<k; j++){
            std::cin >> v;
            Adj[u-1].push_back(v);
        }
    }

    //input_A
    int A[n][n];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            A[i][j] = 0;
        }
    }
    for(int i=0; i<n; i++){
        int len = Adj[i].size();
        for(int j=0; j<len; j++){
            A[i][Adj[i][j]-1] = 1;
        }
    }

    //output_A
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(j+1==n)  std::cout << A[i][j] << '\n';
            else        std::cout << A[i][j] << " ";
        }
    }
    return 0;
}
