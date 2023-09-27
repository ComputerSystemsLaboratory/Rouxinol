#include <iostream>
#include <string>
using namespace std;

const int kMaxFace = 6;

void PushWheel(int (&array)[kMaxFace], int a, int b, int c, int d)
{
    int temp = array[a];
    array[a] = array[b];
    array[b] = array[c];
    array[c] = array[d];
    array[d] = temp;
}

class Dice
{
public:
    Dice(const int (&inputArr)[kMaxFace]);
    void Write();
    
    void Rotation(const char dir);
    int Get();

private:
    enum EFace{UP, SOUTH, EAST, WEST, NORTH, BOTTOM};
    
    Dice(){}
    int faces[kMaxFace];    // up,S,E,W,N,bottom. 
};

Dice::Dice(const int (&inputArr)[kMaxFace])
{
    for (int i=0; i<kMaxFace; ++i)
    {
        faces[i] = inputArr[i];
    }
}

void Dice::Rotation(const char dir)
{
    switch(dir)
    {
        // 5, 1, 3, 4, 6, 2. 
        case 'S': PushWheel(faces, UP, NORTH, BOTTOM, SOUTH);   break;
        case 'E': PushWheel(faces, UP, WEST, BOTTOM, EAST); break;
        case 'W': PushWheel(faces, UP, EAST, BOTTOM, WEST); break;
        case 'N': PushWheel(faces, UP, SOUTH, BOTTOM, NORTH); break;
        default:      break;
    }
}

int Dice::Get()
{
    return faces[UP];
}

int main()
{
    int faces[kMaxFace] = {0};
    for (int i=0; i<kMaxFace; ++i)
    {
        cin >> faces[i];
    }

    Dice dice(faces);
    
    string str;
    cin >> str;
    for (int i=0; i<str.length(); ++i)
    {
        dice.Rotation(str[i]);
    }
    
    cout << dice.Get() << endl;
    
    return 0;
}