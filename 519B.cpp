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
    int n;
    cin >> n;
    int sum=0;
    int sum2=0;
    int sum3=0;
    for(int i=0;i<n;i++){
        int a;
        cin >> a;
        sum+=a;
    }
    for(int i=0;i<n-1;i++){
        int a;
        cin >> a;
        sum2+=a;
    }
    cout << sum-sum2 << endl;
    for(int i=0;i<n-2;i++){
        int a;
        cin >> a;
        sum3+=a;
    }
    cout << sum2-sum3 << endl;
    return 0;
}
