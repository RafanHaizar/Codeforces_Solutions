/**
 * @tagline Bismillahi Allahuakbar, JOY BANGLA!!!
 * @author Rafan
 * OIA IOAAA OIIIII
 *             - Cat
 */
 
#include <bits/stdc++.h>
using namespace std;
 
string output_header = " ----OUTPUT----- ";
string spp = " ";
string yes = "YES";
string no = "NO";
vector<int> dp;
 
 
int main() {
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        int hash_top=0,hash_most=0;
        int x,y;
        int mid_before=0;
        cin >> x >> y;
        for(int s=0;s<x;s++){
            int mid=0;
            for(int yy=0;yy<y;yy++){
                char o;
                cin >> o;
                if(o=='#'&&hash_top==0){
                    hash_top=yy+1;
                }
                if(o=='#'){
                    mid++;
                }
            }
            if(mid_before<mid){
                mid_before=mid;
                hash_most=s+1;
            }
        }
        cout << hash_most << spp << hash_top << endl;
    }
    return 0;
}
