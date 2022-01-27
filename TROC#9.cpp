//link : https://tlx.toki.id/problems/troc-9/A

#include <bits/stdc++.h>
#include <string.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	
	string s;
	cin >> s;
	int total = 0;
	int size = s.length();
	
	for(int i=0; i<size; i++){
		if(s[i] == 'O'){
			total++;
		}
	}
	if(total == 1){
		cout << "Ya";
	}
	else{
		cout << "Tidak";
	}
}
