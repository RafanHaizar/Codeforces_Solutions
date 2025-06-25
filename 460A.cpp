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
    int n,m,cnt=0;
    cin >> n >> m;
    while(n!=0){
        n--;
        cnt++;
        if(cnt%m==0){
            n++;
        }
    }
    cout << cnt << flush;
    return 0;
}
