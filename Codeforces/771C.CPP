
// https://codeforces.com/contest/1638/problem/C
#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
      cin >> arr[i];
    }

    int arr_max =0;
    int ans = 0;
    for(int i=0; i<n; ++i){ arr_max = max(arr_max,arr[i]);
    	if(arr_max == i+1){ ans++ ;}
    }
    cout<<ans<<endl;
}
 
int main(){
	int T;
	cin >> T;
	while(T--) solve();
}

