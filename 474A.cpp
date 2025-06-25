/**
 * @tagline Bismillahi Allahuakbar, JOY BANGLA!!!
 * @author Rafan
 * JOY SANDA! JOY SANDOBONDHU
 *                       - Sanda
 */
 
#include <bits/stdc++.h>
using namespace std;
 
string output_header = " ----OUTPUT----- ";
string spp = " ";
string yes = "YES";
string no = "NO";
vector<int> dp;
 
 
int main() {
    char n;
    cin >> n;
    vector<char> arr = {
        'q','w','e','r','t','y','u','i','o','p',
        'a','s','d','f','g','h','j','k','l',';',
        'z','x','c','v','b','n','m',',','.','/'
    };
    string arr2;
    cin >> arr2;
    for(int i=0;i<arr2.size();i++){
        if(n=='R'){
            auto t=find(arr.begin(),arr.end(),arr2[i]);
            cout << arr[distance(arr.begin(),t)-1] << flush;
        }else{
            auto t=find(arr.begin(),arr.end(),arr2[i]);
            cout << arr[distance(arr.begin(),t)+1] << flush;
        }
    }
    return 0;
}
