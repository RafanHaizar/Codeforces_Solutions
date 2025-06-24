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
    str v;
    cin >> v;
    if(v=="first"){
        cout << "Nauuo and Votes" << flush;
    }else if(v=="second"){
        cout << "Nauuo and Chess" << flush;
    }
    
    return 0;
}
