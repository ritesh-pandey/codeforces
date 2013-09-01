#include <iostream>
#include <string>

using namespace std;

int main(){
	string s;
	cin>>s;
	string yx = "yx";
	size_t found = s.find(yx);
	while(found != string::npos){
		s = s.substr(0,(int)found) + "xy" + s.substr((int)found+2);
		found = s.find(yx);
	}
	string xy = "xy";
	found = s.find(xy);
	while(found != string::npos){
		s = s.substr(0,(int)found) + s.substr((int)found+2);
		found = s.find(xy);
	}
	cout<<s<<"\n";
	return 0;	
}
