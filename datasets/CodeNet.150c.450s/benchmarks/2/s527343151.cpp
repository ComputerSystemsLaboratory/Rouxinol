#include<iostream>
#include<vector>

std::vector<int> A;
int n;


int partition(){
    int y;
    y = -1;

    for(int i = 0; i < n-1; i++){
	if(A[i] <= A[n-1]){
	    std::swap(A[i], A[y+1]); 
	    y++;
	}
    }
    std::swap(A[y+1], A[n-1]);

    return y+1;
}

int main(void){
    std::cin >> n;
    A.resize(n);
    for(int i = 0; i < n; i++){
	std::cin >> A[i];
    }

    int base_index = partition();

    for(int i = 0; i < n; i++){
	if(i != 0){
	    std::cout << " ";
	}
	
	if(i == base_index){
	    std::cout << "[" << A[i] << "]";
	}else{
	    std::cout << A[i];
	}
    }
    std::cout << std::endl;

    return 0;

}

