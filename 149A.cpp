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
    int n,cnt=0;
    cin >> n;
    vector<int> arr;
    for(int i=1;i<=12;i++){
        int a;
        cin >> a;
        arr.push_back(a);
    }
    sort(arr.begin(),arr.end());
    for(int i=11;i>=0;i--){
        if(n>0){
            n-=arr[i];
            cnt++;
        }
    }
    if(n>0){
        cout << -1 << flush;
    }else{
        cout << cnt << flush;
    }
    return 0;
}
