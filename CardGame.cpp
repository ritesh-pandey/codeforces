#include <iostream>
#include <map>
#include <string>

using namespace std;

int main(){
	map<char, int> rank;
	rank['6'] = 6;
	rank['7'] = 7;
	rank['8'] = 8;
	rank['9'] = 9;
	rank['T'] = 10;
	rank['J'] = 11;
	rank['Q'] = 12;
	rank['K'] = 13;
	rank['A'] = 14;
	char tramp;
	cin>>tramp;
	string one,two;
	cin>>one>>two;
	if(one[1] == tramp && one[1] != two[1]){
		cout<<"YES\n";
		return 0;
	}
	else if(two[1] == tramp && one[1] != two[1]){
		cout<<"NO\n";
		return 0;
	}
	if(one[1] == two[1] && rank[one[0]] > rank[two[0]])
		cout<<"YES\n";
	else
		cout<<"NO\n";
	return 0;
}
