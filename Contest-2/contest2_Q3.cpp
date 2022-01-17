#include <bits/stdc++.h>
using namespace std;
const int N = 2e5+10;
int a[N];
int hsh[N];

int main(){
	int n;
	cin>>n;
	for(int i=1; i<=n; ++i){
		cin>> a[i];
		hsh[a[i]]++;
	}
	int q;
	cin>> q;
	while(q--){
		int i,price;
		cin>> i >> price;
		if(a[i]==price){
			cout << 0 << endl;
			continue;
		}
		hsh[a[i]]--;
		if(price > a[i]){
			int req = price - a[i];
			if(hsh[req]==0 && hsh[price]==0){
				cout<< -1 << endl;
			}else{
				cout<< hsh[req] + hsh[price] << endl;
			}
		}
		else{
			cout << ((hsh[price] ==0) ? -1 : hsh[price]) <<endl; 
		}
		hsh[a[i]]++;
	}

}