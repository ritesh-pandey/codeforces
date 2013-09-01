# include<iostream>
# include<string>

using namespace std;

int main(){
	string s;
	cin>>s;
	string word = "hello";
	int i = 0,j = 0;
	while(i<s.size() && j<word.size()){
		if(s[i] == word[j])
			j++;
		i++;
	}
	if(j == word.size())
		cout<<"YES\n";
	else
		cout<<"NO\n";
	return 0;
}
