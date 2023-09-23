#include <iostream>                                   
                                                      
char judge_grade(short m, short f, short r) {         
    if(m == -1 || f == -1) return 'F';                
                                                      
    if(m + f >= 80) return 'A';                       
    if(m + f >= 65) return 'B';                       
    if(m + f >= 50) return 'C';                       
    if(m + f >= 30) {                                 
        if(r >= 50) return 'C';                       
        return 'D';                                   
    }                                                 
                                                      
    return 'F';                                       
}                                                     
                                                      
int main(int argc, char *argv[]) {                    
    int m, f, r = 0;                                  
                                                      
    while(std::cin >> m >> f >> r, !(m == -1 && f == -1 && r == -1)) {
        std::cout << judge_grade(m, f, r) << std::endl;
    }                                                 
    return 0;                                         
}