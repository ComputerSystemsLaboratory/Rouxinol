#include <iostream>
#include <array>

int main(){
    std::array<int, 4> a; //player A
    std::array<int, 4> b; //player B
    int hit=0;
    int blow=0;
   
    while(std::cin >> a[0] >> a[1] >> a[2] >> a[3]){
        std::cin >> b[0] >> b[1] >> b[2] >> b[3];      
        //if(a[0] == a[1] == a[2] == a[3] == b[0] == b[1] == b[2] == b[3] == -1)
	//break;

	//    std::cout << b[0];
    
        for(int i=0; i<a.size(); ++i){
            for(int j=0; j<b.size(); ++j){
	        if(a[i] == b[j] && i == j)
	            ++hit;
	        else if(a[i] == b[j] && i != j)
	            ++blow;
	    }
	}

	std::cout << hit << " " << blow << std::endl;

	hit = blow = 0;
    }  
    return 0;
}