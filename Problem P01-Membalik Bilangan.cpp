//ZalfaNafila c++
//https://tlx.toki.id/problems/toki-exercise-1/P01/

#include <bits/stdc++.h>
#include <math.h>
#include <cstring>
#include<string>
#include<algorithm>
using namespace std;
#define hello ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long


int main(){
    hello
    ll t;
    cin >> t;
    while(t--){
        string n;
        cin >> n;
        ll sz = n.length();
        reverse(n.begin(), n.end());
        int a = stoi(n);
        cout << a << endl;
//        if(n[0] == '0'){
//            n.erase(0,1);
//        }
//        cout << n << endl;
    }
}
