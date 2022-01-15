#include <bits/stdc++.h>
using namespace std;

const int n = 3e7;
int a[n];

int main(){
	
	a[n-1] = 7;
	cout<< a[n-1];

	const int n = 1e7; //10^7 and get Segmentation fault 
	//because array size should not gater than 10^5 in local variable
	int a[n];
	a[n-1] = 7;
	cout<< a[n-1];






	//2D ARRAY
	int n,m;
	cin>> n >> m;
	int a[n][m];
	for (int i=0; i<n; ++i){
		for (int j=0; j<m; ++j){
			cin>> a[i][j];

		}
	}
	for (int i=0; i<n; ++i){
		for (int j=0; j<m; ++j){
			cout << a[i][j] << " ";

		}
		cout << endl;
	}

	//Segmentation fault

}