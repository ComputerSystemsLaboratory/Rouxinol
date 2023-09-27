#include<iostream>
using namespace std;

int main(){
        const int n = 6;
        int dice[n] ;
        string s;
        string haki;
        const int dice_tem[4][6] ={ {2,6,3,4,1,5},{5,1,3,4,6,2},
                                    {4,2,1,6,5,3},{3,2,6,1,5,4}};
        int dice_result[6];
        for(int i = 0; i < n; i++){
                cin  >>dice[i];
        }
        getline(cin ,haki);
        getline(cin,s);
        int s_len = s.length();
        for(int i = 0; i < s_len;i++){
                int dice_flag = -1;
                switch(s[i]){
                case 78: //N
                        dice_flag = 0;
                        break;
                case 83: //S
                        dice_flag = 1;
                        break;
                case 69: //E
                        dice_flag = 2;
                        break;
                case 87: //W
                        dice_flag = 3;
                        break;
                default :
                        break;                
                }
                if(dice_flag == -1)continue;
                for(int i = 0; i < n ;i++){
                        dice_result[i] =
                         dice[dice_tem[dice_flag][i]-1];
                }
                for(int i = 0; i < n; i++)dice[i] = dice_result[i];
        }
        cout << dice[0] << endl;
        return 0;
}
