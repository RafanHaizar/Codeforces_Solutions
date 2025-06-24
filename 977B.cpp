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
    int n,mx=0;
    string nm;
    cin >> n;
    string v;
    cin >> v;
    string s;
    map<string,int> arr;
    for(int i=1;i<n;i++){
        string sub = string() + v[i - 1] + v[i];
        arr[sub]++;
    }
    for(int i=1;i<n;i++){
        string sub = string() + v[i - 1] + v[i];
        if(arr[sub]>mx){
            mx=arr[sub];
            s=sub;
        }
    }
    cout << s << flush;
    return 0;
}
