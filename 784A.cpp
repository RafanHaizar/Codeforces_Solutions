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
 
void p(int v){
    cout << v << flush;
}
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    vector<int> s={4, 22, 27, 58, 85, 94, 121, 166, 202, 265, 274, 319, 346, 355, 378, 382, 391, 438, 454, 483, 517, 526, 535, 562, 576, 588, 627, 634, 636, 645, 648, 654, 663, 666, 690, 706, 728, 729, 762, 778, 825, 852, 861, 895, 913, 915, 922, 958, 985, 1086, 1111, 1165, 1219};
    int n;
    cin >> n;
    cout << s[n-1] << flush;
    
    return 0;
}
