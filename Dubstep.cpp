# include<iostream>
# include<string>

using namespace std;

int main(){
	string dubstep;
	cin>>dubstep;
	string song = "";
	int i = 0;
	while(i < dubstep.size()-2){
		if(dubstep[i] == 'W' && dubstep[i+1] == 'U' && dubstep[i+2] == 'B'){
			song += " ";
		}
		else
			song += dubstep[i];
		i++;
	}
}
