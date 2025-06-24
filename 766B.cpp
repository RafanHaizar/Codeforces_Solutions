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
vector<long long int> dp;
 
 
int main() {
    int n;
    cin >> n;
    vector<int> arr;
    bool tt=false;
    for(int i=0;i<n;i++){
        int s;
        cin >> s;
        arr.push_back(s);
    }
    sort(arr.begin(),arr.end());
    for(int i=2;i<n;i++){
        if(arr[i-2]<(arr[i-1]+arr[i])&&arr[i-1]<(arr[i-2]+arr[i])&&arr[i]<(arr[i-1]+arr[i-2])){
            tt=true;
        }
    }
    if(tt){
        cout << yes << flush;
    }else{
        cout << no << flush;
    }
    return 0;
}
