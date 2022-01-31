//link : https://tlx.toki.id/problems/troc-22/A

#include <iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	bool ten = false;
	
	while(n>0){
		if(n%10 == 0){
			ten = true;
		}
		n/=10;
	}
	if(ten == true){
		cout << "YES";
	}
	else{
		cout << "NO";
	}
}
