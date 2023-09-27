#include <bits/stdc++.h>
using namespace std;

int main() {

    while(1){

        int h,w;

        cin >> h >> w;

        int diagonal = h*h + w*w;

        if(h==0 && w==0) break;

        pair<int,int> ans = make_pair(500,500); //first = h , second = w

        for(int i=1; i<151; i++){
            for(int j=i+1; j<151; j++){

                int check_rect_diagonal = i*i + j*j;

                if(diagonal < check_rect_diagonal || (diagonal == check_rect_diagonal && h < i)){

                    int ans_h = ans.first;
                    int ans_w = ans.second;

                    int ans_rect_diagonal = ans_h*ans_h + ans_w*ans_w;

                    if(check_rect_diagonal < ans_rect_diagonal || (check_rect_diagonal == ans_rect_diagonal && i < ans_h )){
                        ans = make_pair(i,j);
                    }



                }
            }
        }

        cout << ans.first << " " << ans.second << endl;




    }



    return 0;
}
