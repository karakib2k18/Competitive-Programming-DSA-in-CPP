/*
input:
2
5
2 2 2 2 2
4
2 2 2 2

output:
YES
NO
*/

#include <bits/stdc++.h>
using namespace std;


int main(){
	int t;
	cin>> t;
	while(t--){
		int n;
		cin>> n;
		long long product = 1;
		for(int i=0; i<n; ++i){
			int x;
			cin>> x;
			product = product*x;	
		}
		int digit = product%10;
		if(digit ==2 || digit == 3 || digit == 5){
			cout<< "YES\n";
		}else{
			cout<< "NO\n";
		}
	}
	return 0;
}