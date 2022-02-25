#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;

		vector<int> arr(n);
		for(int i=0;i<n; ++i){
			cin>> arr[i];
		}
		int j=0;
		while(j<n && arr[j]==j+1){
			j++;
		}
		if(j<n){
			reverse(arr.begin() + j, min_element(arr.begin() + j, arr.end())+1);
		}

		for(int i=0; i<n; ++i){
			cout << arr[i] << " ";
		}
		cout <<endl;



	}
}