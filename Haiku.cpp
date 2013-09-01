#include <iostream>
#include <cstring>
#include <string>

using namespace std;

int main(){
	int syll[3];
	memset(syll,0,sizeof(int)*3);
	int index = 0, j = 0;
	while(j < 3){
		string str;
		getline(cin,str);
		for(int i=0; i<str.size(); i++){
			char c = str[i];
			if(c == 'a'||c=='e'||c=='i'||c=='o'||c=='u')
				syll[index]++;
		}
		index++;
		j++;
	}
	if(syll[0] == 5 && syll[1] == 7 && syll[2] == 5)
		cout<<"YES\n";
	else
		cout<<"NO\n";
	return 0;
}
