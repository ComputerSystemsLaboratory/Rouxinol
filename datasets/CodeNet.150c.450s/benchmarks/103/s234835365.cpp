#include<stdio.h>
#include<iostream>
#include<list>
#include<map>
#include<vector>
#include<algorithm>
#include<string.h>
#define range(i,a,b) for(int i = (a); i < (b); i++)
#define rep(i,b) range(i,0,b)
#define debug(x) cout << x << endl;
using namespace std;
//半手動
int main(){
    int n, m;
    while(cin >> n >> m, n){
        int ans = 0;
        if(n >= 1){
            for(int i = 0; i < 10; i++){
                if(n == 1)
                    if(i == m)
                        ans++;
        if(n >= 2){
            for(int j = i + 1; j < 10; j++){
                if(n == 2)
                    if(i + j == m)
                        ans++;
        if(n >= 3){
            for(int k = j + 1; k < 10; k++){
                if(n == 3)
                    if(i + j + k == m)
                        ans++;
        if(n >= 4){
            for(int l = k + 1; l < 10; l++){
                if(n == 4)
                    if(i + j + k + l== m)
                        ans++;
        if(n >= 5){
            for(int o = l + 1; o < 10; o++){
                if(n == 5)
                    if(i + j + k + l + o == m)
                        ans++;
        if(n >= 6){
            for(int p = o + 1; p < 10; p++){
                if(n == 6)
                    if(i + j + k + l + o + p == m)
                        ans++;
        if(n >= 7){
            for(int q = p + 1; q < 10; q++){
                if(n == 7)
                    if(i + j + k + l + o + p + q== m)
                        ans++;
        if(n >= 8){
            for(int r = q + 1; r < 10; r++){
                if(n == 8)
                    if(i + j + k + l + o + p + q + r == m)
                        ans++;
        if(n >= 9){
            for(int s = r + 1; s < 10; s++){
                if(n == 9)
                    if(i + j + k + l + o + p + q + r + s == m)
                        ans++;
        }}}}}}}}}}}}}}}}}}
        cout << ans << endl;
    }
}