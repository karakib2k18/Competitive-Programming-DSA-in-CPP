#include <bits/stdc++.h>
using namespace std;
const int N = 1e3+10;
int arr[N][N];

int main(){
	int m,n;
	cin >> m >> n;
	for(int i=1; i<=m; ++i){
		for(int j=1; j<=n; ++j){
			int x;
			cin>> x;
			if(x%2==0){
				arr[i][j]=0;
			}else{
				arr[i][j]=1;
			}
			arr[i][j]=arr[i][j]+arr[i-1][j]+arr[i][j-1]-arr[i-1][j-1];

		}
	}

	int q;
	cin>>q;
	while(q--){
		int l1,r1,l2,r2;
		cin>> l1 >> r1 >> l2 >> r2;
		cout << arr[l2][r2]-arr[l1-1][r2]-arr[l2][r1-1]+arr[l1-1][r1-1] <<endl;

	}

}