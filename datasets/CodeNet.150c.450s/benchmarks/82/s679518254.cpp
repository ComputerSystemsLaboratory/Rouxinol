#include<iostream>

int main(){
    int dice[6],q,qnum[2];
    
    for(int i=0; i<6; i++){
        std::cin>>dice[i];
    }

    std::cin>>q;
    
    for(int i=0; i<q; i++){
        std::cin>>qnum[0]>>qnum[1];
        
        if( qnum[0]==dice[3] && qnum[1]==dice[1]){
            std::cout<<dice[0]<<std::endl;
        }else if( qnum[0]==dice[1] && qnum[1]==dice[2]){
            std::cout<<dice[0]<<std::endl;
        }else if( qnum[0]==dice[2] && qnum[1]==dice[4]){
            std::cout<<dice[0]<<std::endl;
        }else if( qnum[0]==dice[4] && qnum[1]==dice[3]){
            std::cout<<dice[0]<<std::endl;
        }
        else if( qnum[0]==dice[3] && qnum[1]==dice[5]){
            std::cout<<dice[1]<<std::endl;
        }else if( qnum[0]==dice[5] && qnum[1]==dice[2]){
            std::cout<<dice[1]<<std::endl;
        }else if( qnum[0]==dice[2] && qnum[1]==dice[0]){
            std::cout<<dice[1]<<std::endl;
        }else if( qnum[0]==dice[0] && qnum[1]==dice[3]){
            std::cout<<dice[1]<<std::endl;
        }
        else if( qnum[0]==dice[0] && qnum[1]==dice[1]){
            std::cout<<dice[2]<<std::endl;
        }else if( qnum[0]==dice[1] && qnum[1]==dice[5]){
            std::cout<<dice[2]<<std::endl;
        }else if( qnum[0]==dice[5] && qnum[1]==dice[4]){
            std::cout<<dice[2]<<std::endl;
        }else if( qnum[0]==dice[4] && qnum[1]==dice[0]){
            std::cout<<dice[2]<<std::endl;
        }
        else if( qnum[0]==dice[1] && qnum[1]==dice[0]){
            std::cout<<dice[3]<<std::endl;
        }else if( qnum[0]==dice[0] && qnum[1]==dice[4]){
            std::cout<<dice[3]<<std::endl;
        }else if( qnum[0]==dice[4] && qnum[1]==dice[5]){
            std::cout<<dice[3]<<std::endl;
        }else if( qnum[0]==dice[5] && qnum[1]==dice[1]){
            std::cout<<dice[3]<<std::endl;
        }
        else if( qnum[0]==dice[0] && qnum[1]==dice[2]){
            std::cout<<dice[4]<<std::endl;
        }else if( qnum[0]==dice[2] && qnum[1]==dice[5]){
            std::cout<<dice[4]<<std::endl;
        }else if( qnum[0]==dice[5] && qnum[1]==dice[3]){
            std::cout<<dice[4]<<std::endl;
        }else if( qnum[0]==dice[3] && qnum[1]==dice[0]){
            std::cout<<dice[4]<<std::endl;
        }
        else if( qnum[0]==dice[2] && qnum[1]==dice[1]){
            std::cout<<dice[5]<<std::endl;
        }else if( qnum[0]==dice[1] && qnum[1]==dice[3]){
            std::cout<<dice[5]<<std::endl;
        }else if( qnum[0]==dice[3] && qnum[1]==dice[4]){
            std::cout<<dice[5]<<std::endl;
        }else if( qnum[0]==dice[4] && qnum[1]==dice[2]){
            std::cout<<dice[5]<<std::endl;
        }
    }

    return 0;
}
