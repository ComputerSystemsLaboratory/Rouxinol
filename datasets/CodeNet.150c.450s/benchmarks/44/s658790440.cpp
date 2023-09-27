#include <iostream>
#include <vector>
#include <array>
 
int get_hit(std::vector<u_int> *A, std::vector<u_int> *B)
{
    u_int hit = 0;
    for(u_int i = 0; i < A -> size(); ++i)
        if(A -> at(i) == B -> at(i))
            ++hit;
             
    return hit;
}
 
int get_blow(std::vector<u_int> *A, std::vector<u_int> *B)
{
    u_int blow = 0;
    for(u_int i = 0; i < A -> size(); ++i){
        for(u_int j = 0; j < B -> size(); ++j){
            if(A -> at(i) == B -> at(j)){
                if(i != j)
                    ++blow;
                break;
            }
        }
    }
             
    return blow;
}
 
int main()
{
    const u_int number = 4;
    std::vector<u_int> A;
    std::vector<u_int> B;
    A.reserve(number);
    B.reserve(number);
     
    std::array<u_int, number> array;
    bool flag = true;
    while(std::cin >> array[0] >> array[1] >> array[2] >> array[3]){
        if(flag){
            A.clear();
            B.clear();
            for(u_int i = 0; i < number; ++i)
                A.push_back(array.at(i));
            flag = !flag;
        }else{
            for(u_int i = 0; i < number; ++i)
                B.push_back(array.at(i));
            std::cout << get_hit(&A, &B) << " " << get_blow(&A, &B) << std::endl;
            flag = !flag;
        }
    }
         
    return 0;
}