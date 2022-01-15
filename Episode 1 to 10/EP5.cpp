#include <bits/stdc++.h>
using namespace std;

int main(){

	////taking long number which more than 10^18
	string str;
	cin >> str;
	cout << str[str.size()-1] <<endl; //charater printout hobe
	cout << (int) str[str.size()-1] <<endl; //skyvalue printout hobe
	int last_digit =  (int) str[str.size()-1] - '0'; //getting last digit as a interger form,  
	cout << last_digit <<endl; //integer value printout hobe

	// //Check palidrom or not
	string str;
	cin>> str;
	string str_reverse;
	for(int i=str.size()-1; i>=0; --i){
		str_reverse.push_back(str[i]); 
	}
	if(str == str_reverse){
		cout << "YES" <<endl;
	}else{
		cout << "No" <<endl;
	}

	//reverse string 
	string str;
	cin>> str;
	string str_reverse;
	for(int i=str.size()-1; i>=0; --i){
		str_reverse.push_back(str[i]); //good way
		// str_reverse = str_reverse + str[i]; // bad way , time complexity high
	}
	cout << str_reverse << endl;



	int t;
	cin>> t;
	cin.ignore();
	while (t--){
		string s;
		getline(cin , s);
		cout<< s << endl;
	}

	string str1;
	getline(cin , str1);
	cout << str1 << endl;

	string str1, str2;
	cin >> str1 >> str2;
	cout << str1 << " " << str2 << endl;


	string str4 =  "RAKIB";
	string str5 = "KHAN";
	string result = str4 + " "+ str5 ;
	cout << result << endl;


	string str = "RAKIB";
	cout<< str[0] << endl;

	string strr = "RAKIB";
	strr[0] = 'x';
	cout<< strr.size()<< endl;
	for(int i=0; i< strr.size(); ++i){
		cout << strr[i] << endl;
	}

	string str2;
	cin>> str2;
	cout << str2 << endl;

	string str3;
	cin>> str3;
	cout << str2 << endl;
	

}