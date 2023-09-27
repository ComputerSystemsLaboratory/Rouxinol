#include <iostream>

struct Dice{
    int top, S, E, W, N, bottom;    
    void Set(int *Input);
    void Roll_N();
    void Roll_W();
    void Roll_S();
    void Roll_E();
    void Roll_clockwise();
    int Out_Right(int topface, int front);
};
void Dice::Set(int *Input)
{
    top = Input[0];
    S = Input[1];
    E = Input[2];
    W = Input[3];
    N = Input[4];
    bottom = Input[5];
}

void Dice::Roll_S()
{
    int temp;
    temp = top;
    top = N;
    N = bottom;
    bottom = S;
    S = temp;
}

void Dice::Roll_E()
{
    int temp;
    temp = top;
    top = W;
    W = bottom;
    bottom = E;
    E = temp;
}

void Dice::Roll_N()
{
    int temp;
    temp = top;
    top = S;
    S = bottom;
    bottom = N;
    N = temp;
}

void Dice::Roll_W()
{
    int temp;
    temp = top;
    top = E;
    E = bottom;
    bottom = W;
    W = temp;
}

void Dice::Roll_clockwise()
{
    int temp;
    temp = W;
    W = N;
    N = E;
    E = S;
    S = temp;
}

int Dice::Out_Right(int topface, int front)
{
    int right;   
    //Adjust topface 
    if(bottom == topface){
        Roll_N();
        Roll_N();
    }else if(S == topface){
        Roll_N();
    }else if(E == topface){
        Roll_W();
    }else if(N == topface){
        Roll_S();
    }else if(W == topface){
        Roll_E();
    }
    if(top != topface)
        return -1;
    
    //Adjust front face
    if (E == front)
    {
        Roll_clockwise();
        Roll_clockwise();
        Roll_clockwise();
        
    }
    else if (N == front)
    {
        Roll_clockwise();
        Roll_clockwise();
    }
    else if (W == front)
    {
        Roll_clockwise();        
    }
    if (S != front)
        return -1;
    
    return E;
}

int main(){
    int Input[6], num;
    int topface, front;
    Dice Dice1;
    char command[100];
    //std::string command;
    for (int i = 0; i < 6; i++)
        std::cin >> Input[i];
    Dice1.Set(Input);

    std::cin >> num;    
    for (int i = 0; i < num; i++){
        std::cin >> topface >> front;
        std::cout << Dice1.Out_Right(topface, front) << std::endl;
    }

    return 0;
}
