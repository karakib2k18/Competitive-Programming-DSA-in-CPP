#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	// //FOR AN ARRAY
	// int a[n];
	// for(int i=0; i<n; ++i){
	// 	cin>> a[i];
	// }
	// sort(a,a+n);
	// for(int i=0; i<n; ++i){
	// 	cout<< a[i] << " ";
	// }
	// cout<<endl;
	// // int *ptr = lower_bound(a,a+n,6);
	// int *ptr = upper_bound(a,a+n,6);
	// if(ptr==(a+n)){
	// 	cout<< "NOT FOUND";
	// 	return 0;
	// }
	// cout<< (*ptr) <<endl;

	//FOR AN VECTOR
	vector<int> a(n);
	for(int i=0; i<n; ++i){
		cin>> a[i];
	}
	sort(a.begin(),a.end());
	for(int i=0; i<n; ++i){
		cout<< a[i] << " ";
	}
	cout<<endl;
	auto it = lower_bound(a.begin(),a.end(),6);
	// auto it = upper_bound(a.begin(),a.end(),6);
	if(it == a.end()){
		cout<< "NOT FOUND";
		return 0;
	}
	cout<< (*it) <<endl;




}