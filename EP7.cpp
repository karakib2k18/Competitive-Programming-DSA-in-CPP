#include <bits/stdc++.h>
using namespace std;

//ARRAY always pass by refernce but other pass by value;

void printHello(){
	cout<< "rakib" << endl;
} 

int digit_sum(int n){
	int digit_sum = 0;
	while(n){
		digit_sum += n%10;
		n = n/10;
	}
	return digit_sum;

}

void increment (int &n){
	n++;
}

int main(){
	printHello();

	int a,b;
	cin>> a >> b;
	cout<< digit_sum(a) + digit_sum(b) << endl;

	int x=3;
	int y=4;
	cout<< max(x,y)<< endl;
	cout<< x << " " << y << endl;
	swap(x,y);
	cout<< x << " " << y << endl;
	cout<< x << endl;
	increment(x);
	cout<< x << endl;

	return 0;
}