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
    long long int n,acnt=0,bcnt=0;
    cin >> n;
    vector<long long int> arr;
    for(long long int i=0;i<n;i++){
        long long int a;
        cin >> a;
        arr.push_back(a);
    }
    sort(arr.begin(),arr.end());
    long long int a=arr[n-1];
    long long int b=arr[0];
    for(long long int i=0;i<n;i++){
        if(arr[i]==a){
            acnt++;
        }else if(arr[i]==b){
            bcnt++;
        }
    }
    if(acnt==n){
        cout << a-b << spp << (acnt*(acnt-1))/2 << flush;
    }else{
        cout << a-b << spp << acnt*bcnt << flush;
    }
    return 0;
}
