/**
 * @tagline Bismillahi Allahuakbar, JOY BANGLA!!!
 * @author Rafan
 * JOY SANDA! JOY SANDOBONDHU
 *                       - Sanda
 */
 
#include <bits/stdc++.h>
using namespace std;
 
string output_header = " ----OUTPUT----- ";
string spp = " ";
string yes = "YES";
string no = "NO";
vector<int> dp;
 
void opp(vector<int> arr){
    for(int i=0;i<arr.size();i++){
        cout << arr[i] << flush;
    }
}
 
int main() {
    int n,m;
    cin >> n >> m;
    if(n==1){
        if(m==10){
            cout << -1 << flush;
        }else{
            cout << m << flush;
        }
    }else{
        vector<int> arr(n,0);
        arr[0]=1;
        if(m==2||m==1||m==10){
            opp(arr);
        }else if(m==5||m==3){
            arr[1]=5;
            opp(arr);
        }else if(m==4){
            arr[0]=2;
            opp(arr);
        }else if(m==6){
            arr[1]=8;
            opp(arr);
        }else if(m==7){
            arr[1]=4;
            opp(arr);
        }else if(m==8){
            arr[1]=6;
            opp(arr);
        }else if(m==9){
            arr[1]=8;
            opp(arr);
        }
    }
    return 0;
}
