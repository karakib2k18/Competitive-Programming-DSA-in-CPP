#include <bits/stdc++.h>

using namespace std;

int main()
{
	int x;
	cin>> x;
	int sum = 0;
	while(x>0){
		int last_digit = x % 10;
	    sum += last_digit;
	    x = x/10;

	}
	cout << sum << endl;


	// while(true){
	// 	int x;
	// 	cin>> x;
	// 	if(x==42){
	// 		break;
	// 	}
	// 	cout<< x << endl;
	// }




	// for (int i= 0; i<10 ; ++i){
	// 	if(i==8){
	// 		continue;
	// 	}
	// 	cout<< i << endl;
	// }


	// while(1){

	// }



	// for(int i; true; ++i){

	// }


	// int a = 2;
	// int b = 3;
	// int c = 4;
	// cout << ((b>a) && (b<c));

	// int t;
	// cin>> t;

	// for (int test=1; test<=t; ++test){
	// 	int n;
	// 	cin>> n;
	// 	for ( int i=1; i<=n ; ++i){
	// 		for (int j=1; j<=i; ++j){
	// 			cout<< "*";
				
	// 		}
	// 		cout<<endl;
	// 	}

     // }





}