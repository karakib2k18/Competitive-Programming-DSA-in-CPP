/*
input:
3
4
0001
2
10
4
1010

output:
1
2
10
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		string s;
		cin>> s;
		long long result = 0;
		long long power2 = 1;
		for(int i=s.size()-1; i>=0; --i){
			int binary_digit = s[i]-'0';
			result = result + (binary_digit * power2);
			power2 = power2 * 2;
		}
		cout<< result <<endl;
	}
}

