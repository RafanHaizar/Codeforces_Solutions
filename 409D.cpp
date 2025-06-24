/**
 * @tagline Bismillahi Allahuakbar, JOY BANGLA!!!
 * @author Rafan
 * OIA IOAAA OIIIII
 *             - Cat
 */
 
#include <bits/stdc++.h>
 
 
using namespace std;
 
typedef long long ll;
typedef double dbl;
typedef string str;
 
str output_header = " ----OUTPUT----- ";
str spp = " ";
str yes = "YES";
str no = "NO";
vector<long long int> dp;
 
#define opp_endl(condition) ((condition) ? (cout << yes << endl << flush) : (cout << no << endl<<flush))
#define opp(condition) ((condition) ? (cout << yes << flush) : (cout << no << flush))
 
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    int n;
    cin >> n;
    if(n==2||n==3||n==5||n==7||n==11||n==14||n==16||n==12){
        cout << 0 << flush;
    }else{
        cout << 1 << flush;
    }
    return 0;
}
