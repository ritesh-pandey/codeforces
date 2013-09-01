# include<iostream>
# include<string>
# include<cctype>

using namespace std;

bool isAllCaps(string s){
	int flag = 0;
	for(int i=0; i<s.size(); i++){
		if(!isupper(s[i])){
			flag = 1;
			break;
		}
	}
	if(flag == 1)
		return false;
	else
		return true;
}

int main(){
	string s;
	cin>>s;
	if(s.size() == 1){
		if(islower(s[0]))
			cout<<(char)toupper(s[0])<<"\n";
		else
			cout<<(char)tolower(s[0])<<"\n";
		return 0;
	}
	else if(isAllCaps(s) || isAllCaps(s.substr(1))){
		for(int i=0; i<s.size(); i++){
			if(isupper(s[i]))
				cout<<(char)tolower(s[i]);
			else
				cout<<(char)toupper(s[i]);
		}
		cout<<"\n";
	}
	else{
		cout<<s<<"\n";
	}
	return 0;
}
