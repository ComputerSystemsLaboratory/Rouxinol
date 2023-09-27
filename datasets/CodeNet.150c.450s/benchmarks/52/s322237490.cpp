#include <iostream>
#include <vector>

int main(){
    std::vector<int> in_train;
    std::vector<int> out_train;
    
    int a; //for input

    while(std::cin >> a){
        if(a == -1){
	    break;
	}else if(a > 0){
	    in_train.push_back(a);
	}else if(a == 0){
	    int e = in_train.back();
	    //std::cout << e << std::endl;
	    out_train.push_back(e);
	    in_train.pop_back();
	}
    }
    
    
    while(out_train.empty() != true){
        int e = out_train.front();
        std::cout << e << std::endl;
        out_train.erase(out_train.begin());
    }
    
    return 0;
}