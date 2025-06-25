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
    int n,m,cnt=0;
    cin >> n >> m;
    for(int i=1;(i<=n);i++){
        if(m%i==0&&(m/i<=n)){
            cnt++;
        }
    }
    cout << cnt << flush;
    return 0;
}
