#include <bits/stdc++.h>
using namespace std;

// https://codeforces.com/problemset/problem/1542/A

void solve(){
    int n;
    cin >> n;
    int ans = 0;

    for(int i=0; i<2*n; ++i){
    	int x;
    	cin>>x;
    	if(x%2==1){ans++;}
    }
    cout<< ((ans==n )? "YES": "NO") <<endl;
}
 
int main(){
	int T;
	cin >> T;
	while(T--) solve();
}