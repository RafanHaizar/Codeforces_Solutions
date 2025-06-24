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
 
    int a,b,c,d,e;
    cin >> a >> b >> c >> d>>e;
    int cnt=0;
    while(true){
        if(a<1||b<1||c<2||d<7||e<4){
            break;
        }else{
            cnt++;
            a-=1;
            b-=1;
            c-=2;
            d-=7;
            e-=4;
        }
    }
    cout << cnt << flush;
 
    return 0;
}
