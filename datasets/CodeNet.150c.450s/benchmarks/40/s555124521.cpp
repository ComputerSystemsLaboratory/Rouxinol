#include <cstdio>
using namespace std;

class Dice{
    public:
    int face[6], temp1, temp2;
    
    Dice(int nums[6]){
        face[0] = nums[0];
        face[1] = nums[1];
        face[2] = nums[2];
        face[3] = nums[3];
        face[4] = nums[4];
        face[5] = nums[5];
    }
    
    int move(char c){
        if (c == 'W'){
            temp1 = face[0];
            temp2 = face[3];
            face[0] = face[2];
            face[2] = face[5];
            face[3] = temp1;
            face[5] = temp2;
        }
        if (c == 'E'){
            temp1 = face[0];
            temp2 = face[2];
            face[0] = face[3];
            face[2] = temp1;
            face[3] = face[5];
            face[5] = temp2;
        }
        if (c == 'S'){
            temp1 = face[0];
            temp2 = face[1];
            face[0] = face[4];
            face[1] = temp1;
            face[4] = face[5];
            face[5] = temp2;
            
        }
        if (c == 'N'){
            temp1 = face[0];
            temp2 = face[4];
            face[0] = face[1];
            face[1] = face[5];
            face[4] = temp1;
            face[5] = temp2;
        }
        return 0;
    }
};

int main(void){
    int nums[6];
    char direction;
    scanf("%d%d%d%d%d%d", &nums[0], &nums[1], &nums[2], &nums[3], &nums[4], &nums[5]);
    Dice dice(nums);
    while(scanf("%c", &direction) != EOF){
        dice.move(direction);
    }
    printf("%d\n", dice.face[0]);
    return 0;
}