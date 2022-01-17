#include <bits/stdc++.h>
using namespace std;
const int N = 1e7+10;
int hsh[N];

int main(){
	int n,k;
	cin>>n>>k;
	for(int i=0; i<n; ++i){
		int x;
		cin>> x;
		hsh[x]++;
	}
	int ct=0;
	for(int i=0; i<N; ++i){
		if(hsh[i]>k){
			ct++;
		}
	}
	cout << ct << endl;


}