#include <iostream>

using namespace std;

int main(){
	int x,t,a,b,da,db;
	cin>>x>>t>>a>>b>>da>>db;
	if(x == 0 || x == a || x == b){
		cout<<"YES\n";
		return 0;
	}
	for(int i=0; i<t; i++){
		for(int j=0; j<t; j++){
			if(a-(i*da) == x){
				cout<<"YES\n";
				return 0;
			}
			if(b-(i*db) == x){
				cout<<"YES\n";
				return 0;
			}
			if(a-(i*da)+b-(j*db) == x){
				cout<<"YES\n";
				return 0;
			}
		}
	}
	cout<<"NO\n";
	return 0; 
}
