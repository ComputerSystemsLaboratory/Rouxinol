#include <iostream>
#include <vector>

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
    
    u_int num1, num2, num3, num4;
    bool flag = true;
    while(std::cin >> num1 >> num2 >> num3 >> num4){
        if(flag){
            A.clear();
            B.clear();
            A.push_back(num1);
            A.push_back(num2);
            A.push_back(num3);
            A.push_back(num4);
            flag = !flag;
        }else{
            B.push_back(num1);
            B.push_back(num2);
            B.push_back(num3);
            B.push_back(num4);
            std::cout << get_hit(&A, &B) << " " << get_blow(&A, &B) << std::endl;
            flag = !flag;
        }
    }
        
    return 0;
}