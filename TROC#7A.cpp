// === By Zalfa ===
//link : https://tlx.toki.id/problems/troc-7/A/

#include <iostream>
using namespace std;

#define opening ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int main(){
	opening
	int n,a[9],x;
	cin >> n;
	
	for(int i =0;i<n; i++){
		cin >> a[i];
	}
	cin >> x;
	for(int j = 0; j<n; j++){
		if(a[j] == x){
			cout << j+1 << endl;
		}
	}	
}
