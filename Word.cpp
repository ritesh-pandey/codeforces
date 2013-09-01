# include<iostream>
# include<string>
# include<cstring>

using namespace std;

int main(){
	string s;
	cin>>s;
	int upper = 0,lower = 0;
	for(int i=0; i<s.size(); i++){
		if(s[i] <= 'Z')
			upper++;
		else
			lower++;
	}
	if(upper <= lower)
		for(int i=0; i<s.size(); i++)
			cout<<(char)tolower(s[i]);
	else if(lower < upper)
		for(int i=0; i<s.size(); i++)
			cout<<(char)toupper(s[i]);
	cout<<"\n";
	return 0;
}
