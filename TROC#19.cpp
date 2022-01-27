//link : https://tlx.toki.id/problems/troc-19/A

#include <bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	
	int n,a;
	cin >> n >> a;
	int total = (n*n + a*a + 1)%4;
	if( total != 0){
		cout << "-1";
	}
	else {
		cout << total;
	}
}
