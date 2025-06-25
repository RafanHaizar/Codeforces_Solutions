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
    int n,m,cnt=0,burned_out=0;
    cin >> n >> m;
    while(n!=0){
        n--;
        cnt++;
        burned_out++;
        if(burned_out>=m){
            n++;
            burned_out-=m;
        }
    }
    cout << cnt << flush;
    return 0;
}
