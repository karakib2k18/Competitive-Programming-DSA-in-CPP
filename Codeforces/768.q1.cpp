#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<pair<int,int>>v(n);
		for(int i=0; i<n; ++i){
			cin>>v[i].first;
		}
		// cout<< (*max_element(v[i].first,v[i].first+n))*(*max_element(v[i].second,v[i].second+n))<<endl;

		for(int i=0; i<n; ++i){
			cout<< v[i].first;
			// cout<< *max_element(v[i].first.begin(),v[i].first.end());
		}
		cout<<endl;
		
		
	}

}