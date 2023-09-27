#include<iostream>
#include<string>
#include<vector>

class DICE{
    public:
        int rear,back,right,left,up,down,TNP;

        void North();
        void East();
        void West();
        void South();
};

//北に1回動くときのサイコロの目の変化を記述
void DICE::North(){
    TNP=up;
    up=rear;
    rear=down;
    down=back;
    back=TNP;
}
//東に1回動くときのサイコロの目の変化を記述
void DICE::East(){
    TNP=up;
    up=left;
    left=down;
    down=right;
    right=TNP;
}
//西に1回動くときのサイコロの目の変化を記述
void DICE::West(){
    TNP=up;
    up=right;
    right=down;
    down=left;
    left=TNP;
}
//南に1回動くときのサイコロの目の変化を記述
void DICE::South(){
    TNP=up;
    up=back;
    back=down;
    down=rear;
    rear=TNP;
}


int main(){
    int Up,Rear,Right,Left,Back,Down;
    DICE DICE_1;
    std::cin>>Up>>Rear>>Right>>Left>>Back>>Down;
 
    int i,n;
    int up_ans,rear_ans;
    std::vector<int> ans;

    std::cin>>n;
    for(i=0;i<n;i++){

        DICE_1.up=Up;
        DICE_1.rear=Rear;
        DICE_1.right=Right;
        DICE_1.left=Left;
        DICE_1.back=Back;
        DICE_1.down=Down;

        std::cin>>up_ans>>rear_ans;
        
        if(rear_ans==DICE_1.up||rear_ans==DICE_1.down){
            while(DICE_1.rear!=rear_ans){
                DICE_1.South();
            }
            while(DICE_1.up!=up_ans){
                DICE_1.East();
            }
        }else{
            DICE_1.North();
            while(DICE_1.up!=rear_ans){
                DICE_1.West();
            }
            DICE_1.South();
            while(DICE_1.up!=up_ans){
                DICE_1.East();
            }
        }
        ans.push_back(DICE_1.right);
    }

    for(i=0;i<n;i++){
        std::cout<<ans[i]<<std::endl;
    }
//    std::cout<<DICE_1.up<<std::endl;
    return 0;   
}

