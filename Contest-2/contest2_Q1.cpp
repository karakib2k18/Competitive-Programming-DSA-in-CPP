#include <bits/stdc++.h>
using namespace std;
const int N = 1e5+10;
int hsh[N];

int main(){
	int m,n;
	cin >> m >> n;
	for(int i=0; i<m; ++i){
		int key,lock;
		cin>> key >> lock;
		hsh[lock] = 1;
	}
	bool doorOpen = true;
	for(int i=0; i<n; ++i){
		int x;
		cin>> x;
		if(hsh[x] == 0){
			doorOpen= false;
		}

	}
	if (doorOpen){
		cout<< "YES";
	}
	else{
		cout <<"NO";
	}
	
}