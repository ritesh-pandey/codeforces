#include <iostream>
#include <string>

using namespace std;

int main(){
	string num;
	cin>>num;
	int l = num.size();
	int flag = 0;
	for(int i=0; i<l; i++){
		if(num[i] == '0'){
			flag = 1;
			break;
		}
	}
	if(flag == 0){
		for(int i=0; i<l-1; i++){
			cout<<num[i];
		}
		cout<<"\n";
		return 0;
	}
	flag = 0;
	for(int i=0; i<l; i++){
		if(flag == 0 && num[i] == '0'){
			flag = 1;
			continue;
		}
		else{
			cout<<num[i];
		}
	}
	cout<<"\n";
	return 0;
}
