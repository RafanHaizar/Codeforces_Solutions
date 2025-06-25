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
 
int main() {
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        int a;
        cin >> a;
        if(360%(180-a)==0){
            cout << yes << endl;
        }else{
            cout << no << endl;
        }
    }
    return 0;
}
