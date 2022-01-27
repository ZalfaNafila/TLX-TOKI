//link : https://tlx.toki.id/problems/troc-25/A

#include <bits/stdc++.h>

using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	
	long long n,k;
	long long sum = 0;
	cin >> n >> k;
	if(n<=k){
	    cout << n;
	}
	for(int i=0;i<n; i++){
	    if(sum > 0 && sum % k == 0){
	        sum *= 2;
}
        else {
            sum++;
}
	}
	cout << sum;
}
