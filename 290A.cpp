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
 
    vector<string> names={"Washington","Adams","Jefferson","Madison","Monroe","Adams","Jackson","Van Buren","Harrison","Tyler","Polk","Taylor","Fillmore","Pierce","Buchanan","Lincoln","Johnson","Grant","Hayes","Garfield","Arthur","Cleveland","Harrison","Cleveland","McKinley","Roosevelt","Taft","Wilson","Harding","Coolidge","Hoover","Roosevelt","Truman","Eisenhower","Kennedy","Johnson","Nixon","Ford","Carter","Reagan"};
    int n;
    cin >> n;
    cout << names[n-1] << flush;
    return 0;
}
