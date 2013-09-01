# include<iostream>
# include<string>
# include<vector>

using namespace std;

int main(){
	string s;
	cin>>s;
	string res = "";
	int i = 0,j = 0;
	int flag = 0;
	do{
		flag = 0;
		i = 0, j = 0;
		while(j < s.size()){
			char c = s[i];
			j = i+1;
			while(s[j] == c && j<s.size())
				j++;
			if((j-i) == 1){
				res += s[i];
			}
			if((j-i) > 1)
				flag = 1;
			i = j;
		}
		s = res;
		res = "";
	}while(flag);
	cout<<s<<"\n";	
	return 0;
}
