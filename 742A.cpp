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
vector<int> dp={8,4,2,6};
 
int main() {
    int n;
    cin >> n;
    if(n==0){
        cout << 1 << flush;
    }else{
        cout << dp[(n-1)%4] << flush;
    }
    return 0;
}
