//link : https://tlx.toki.id/problems/troc-17/A/

#include <bits/stdc++.h>
#include <math.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	
	int n,a[101],b[101];
	int sum = 0;
	cin >> n;
	for(int i=1; i<=n; i++){
		cin >> a[i];
		sum+=a[i];
		}
	for(int j=1; j<=n; j++){
		cin >> b[j];
	}
	if(sum % 2 == 0){
		cout << "0";
	}
	else
	cout << "1";
}
