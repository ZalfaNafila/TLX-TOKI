// === By Zalfa ===
//link : https://tlx.toki.id/problems/inc-2018/A/

#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	
	int n,a,b,loc[101];
	string dirA,dirB;
	int sumA = 0,sumB = 0;
	cin >> n;
	for(int i=1; i<=n; i++){
		cin >> loc[i];
	}
	cin >> a >> dirA >> b >> dirB;

	if(dirA == "right"){
	for(int i=a; i<=n; i++){
			sumA+=loc[i];
		}
	}
	else if(dirA == "left"){
		for(int j=1; j<=a; j++){
			sumA+=loc[j];
		}
	}
	
	if(dirB == "right"){
		for(int i=b; i<=n; i++){
			if(loc[i] == 0){
				sumB++;
		}
	}
}
	else if(dirB == "left"){
		for(int j=1; j<=b; j++){
			if(loc[j] == 0){
				sumB++;
			}
	}
}
	cout << sumA << " "<< sumB;
}
