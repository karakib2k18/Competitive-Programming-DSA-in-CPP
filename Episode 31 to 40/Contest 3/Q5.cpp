#include <bits/stdc++.h>
using namespace std;
const int N = 1e5+10;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,x,m;
		cin>>n;
		multiset<int> gadgets;
		for(int i=0; i<n; ++i){
			cin>>x;
			gadgets.insert(x);
		}
		cin>>m;
		for(int i=0; i<m; ++i){
			cin>>x;
			int count_x = gadgets.count(x);
			while(count_x--){
				cout << x << " ";
			}
			gadgets.erase(x);
		}
		for(int gadget : gadgets){
			cout<< gadget << " ";
		}
		cout<<endl;


	}
}