#include <bits/stdc++.h>
using namespace std;

//2D ARRAY
const int N = 1e3+10;
int arr[N][N];
long long prefix_sum[N][N];

// //1D Array
// const int N = 1e5+10;
// int a[N];
// int prefix_sum[N];

int main(){
	// //2D ARRAY
	// 3
	// 3 6 2
	// 8 9 2
	// 3 4 1
	// 2
	// 1 1 2 2
	// 1 2 3 3
	int n;
	cin>> n;
	for(int i=1; i<=n; ++i){
		for(int j=1; j<=n; ++j){
			cin >> arr[i][j];
			prefix_sum[i][j]= arr[i][j] + prefix_sum [i-1][j] + prefix_sum [i][j-1] -prefix_sum [i-1][j-1];
		}
	}
	int q;
	cin>> q;
	while(q--){
		int a,b,c,d;
		cin>> a >> b >> c >>d;
		cout << prefix_sum[c][d] - prefix_sum[a-1][d] - prefix_sum[c][b-1] + prefix_sum[a-1][b-1] << endl;
			// //O(N^2) + O(Q) = 10^6+10^5 = 10^6
	}




	/*
	//1D Array
	// 6
	// 3 6 2 8 9 2
	// 4
	// 2 3
	// 4 6
	// 1 5
	// 3 6
	int n;
	cin>> n;
	for(int i=1; i<=n; i++){
		cin>> a[i];
		prefix_sum[i]= prefix_sum[i-1] + a[i];

	}

	int q;
	cin>>q;
	while(q--){
		int L,R;
		cin>> L >> R;
		cout<< prefix_sum[R]- prefix_sum[L-1] << endl;
	}

	//O(N) + O(Q) = 10^10


	//NORMAL WAY
	int n;
	cin>> n;
	for(int i=1; i<=n; i++){
		cin>> a[i];
	}

	int q;
	cin>>q;
	while(q--){
		int L,R;
		cin>> L >> R;
		long long sum = 0;
		for(int i=L; i<=R; i++){
			sum+=a[i];
		}
		cout<< sum << endl;
	}

	//O(N) + O(Q*N) = 10^10
	*/
}