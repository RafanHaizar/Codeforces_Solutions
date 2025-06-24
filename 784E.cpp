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
 
    bool or1=false,xor1=false,and1=false,or2=false,and2=false,xor2=false,or3=false;
 
    int a,b,c,d;
    cin >> a>>b>>c>>d;
 
    if((a==1||b==1)&&min(a,b)!=1){
        or1=true;
    }
    if(c==1||d==1){
        xor1=true;
    }
    if(b==1&&c==1){
        and1=true;
    }
    if((a==1||d==1)&&min(a,d)!=1){
        or2=true;
    }
    if(or1==true&&xor1==true){
        and2=true;
    }
    if((and1==true||or2==true)){
        xor2=true;
    }
    if((xor2==true&&and2==true)||(xor2==false&&and2==false)){
        cout << 0 << flush;
    }else{
        cout << 1 << flush;
    }
 
    return 0;
}
