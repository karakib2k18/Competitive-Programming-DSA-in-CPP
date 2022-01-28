#include <bits/stdc++.h>
using namespace std;

// //sum of a list-> 1 2 3 4 5 6 7 
// int sum(int n, int a[]){
// 	if(n<0) return 0;
// 	return sum(n-1, a)+ a[n];
// }

// //sum of long digit -> 12345678
// int digit_sum(int n){
// 	if(n<0) return 0;
// 	return digit_sum(n/10) + n%10;
// }


//merge

const int N=1e5+10;
int a[N];
void merge(int l, int r, int mid){
	int l_sz = mid-l +1;
	int r_sz=r-mid;
	int L[l_sz+1];
	int R[r_sz+1];
	for(int i=0; i<l_sz; ++i){
		L[i] = a[i+l];
	}
	for(int i=0; i<l_sz; ++i){
		R[i] = a[i+mid+1];
	}
	L[l_sz] = R[r_sz] = INT_MAX;
	int l_i =0;
	int r_i = 0;
	for(int i=l; i<=r; ++i){
		if(L[l_i]<=R[r_i]){
			a[i]=L[l_i];
			l_i++;
		}else{
			a[i]=R[r_i];
			r_i++;
		}
	}
}
void mergesort(int l, int r){
	if(l==r) return;
	int mid = (l+r)/2;
	mergesort(l,mid);
	mergesort(mid+1,r);
	merge(l,r,mid);

}

int main(){
	//n*long2(n)


	//merge sort
	int n;
	cin>>n;
	for(int i=0; i<n; ++i){
		cin>> a[i];
	}
	mergesort(0,n-1);
	for(int i=0; i<n; ++i){
		cout<< a[i] << " ";
	}













	// //selection sort
	// int n;
	// cin>>n;
	// int a[n];
	// for(int i=0; i<n; ++i){
	// 	cin>> a[i];
	// }
	// for(int i=0; i<n; ++i){
	// 	int mindindex = i;
	// 	for(int j=i+1; j<n; ++j){
	// 		if(a[j]<a[mindindex]){
	// 			mindindex = j;
	// 		}
	// 	}
	// 	swap(a[i], a[mindindex]);
	// }
	// for(int i=0; i<n; ++i){
	// 	cout<< a[i] << " ";
	// }
}