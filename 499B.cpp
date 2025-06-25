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
    int n,m;
    string opp;
    cin >> n >> m;
    vector<string> arr_b,arr_a;
    for(int i=0;i<m;i++){
        string a,b;
        cin >> a >> b;
        arr_b.push_back(b);
        arr_a.push_back(a);
    }
    for(int i=0;i<n;i++){
        string v;
        cin >> v;
        auto it1=find(arr_b.begin(),arr_b.end(),v);
        auto it2=find(arr_a.begin(),arr_a.end(),v);
        if(it1!=arr_b.end()){
            auto vvv=distance(arr_b.begin(),it1);
            if(arr_b[vvv].length()<arr_a[vvv].length()){
                opp=opp+spp+arr_b[vvv];
            }else{
                opp=opp+spp+arr_a[vvv];
            }
        }else if(it2!=arr_a.end()){
            auto vvv=distance(arr_a.begin(),it2);
            if(arr_b[vvv].length()<arr_a[vvv].length()){
                opp=opp+spp+arr_b[vvv];
            }else{
                opp=opp+spp+arr_a[vvv];
            }
        }else{
            opp=opp+spp+v;
        }
    }
    opp.erase(0,1);
    cout << opp << flush;
    return 0;
}
