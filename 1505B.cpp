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
 
string check(string v){
    int cont=0;
    for(int i=0;i<v.size();i++){
        cont+=stoi(to_string(v[i]-'0'));
    }
    return to_string(cont);
}
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    string v;
    cin >> v;
    while(v.size()>1){
        v=check(v);
    }
    cout << v << flush;
 
    return 0;
}
