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
    int a,b,c;
    cin >> a >> b >>c;
    int arr[a];
    for(int i=0;i<a;i++){
        cin >> arr[i];
        if(arr[i]>b){
            arr[i]=0;
        }
    }
    int totl=0,sub=0;
    for(int i=0;i<a;i++){
        sub+=arr[i];
        if(sub>c){
            totl++;
            sub=0;
        }
    }
    cout << totl << flush;
    return 0;
}
