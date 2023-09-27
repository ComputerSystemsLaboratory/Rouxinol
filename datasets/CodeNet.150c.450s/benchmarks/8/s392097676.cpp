#include<iostream>
using namespace std;

int main(){
        int n;
        int p1 = 0;
        int p2 = 0;
        bool change = false;
        string haki;
        string in;
        string player1[1000];
        string player2[1000];
        cin >> n;
        getline(cin,haki);
        for(int i =0;i <n; i++){
                getline(cin,in);
                for(int q = 0; q < in.length();q++){
                        if(in[q] == 32){
                                change = true;
                        }else if(change == true){
                                player2[i] += in[q];
                        }else{
                                player1[i] += in[q];
                        }
                }
                change = false;
        }
        for(int i = 0; i < n; i++){
                int h =0;
                bool y = false;
                int k = player1[i].length() > player2[i].length()
                        ? player2[i].length():player1[i].length();
                for(h = 0; h < k; h++){
                        if(player1[i][h]>player2[i][h]){
                                p1 += 3;
                                break;
                        }else if(player1[i][h]<player2[i][h]){                                p2 += 3;
                                break;
                        }else{
                                y = true;
                        }
                }
                if(y == true){
                        if((97>player1[i][h]||player1[i][h] >122) &&
                            (97>player2[i][h]||player2[i][h] >122)){
                                p1++;
                                p2++;
                        }
                        else if(97 >player1[i][h]||player1[i][h] >122){
                                p2 += 3;
                        }else if(97 > player2[i][h]||player2[i][h] > 122){
                                p1 += 3;
                        }
                }

        }
        cout << p1 << " " <<p2 << endl;
}
