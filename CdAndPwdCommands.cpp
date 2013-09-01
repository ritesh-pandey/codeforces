#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
	int n;
	cin>>n;
	vector<string> dir(51);
	int pos = 0;
	while(n--){
		string command;
		cin>>command;
		if(command == "cd"){
			string path;
			cin>>path;
			if(path[0] == '/'){
				pos = 0;
				for(int i=0; i<51; i++){
					dir[i] = "";
				}
			}
			for(int i=0; i<path.size(); i++){
				if(path[i] == '.'){
					pos--;
					i+=2;
					continue;
				}
				if(path[i] == '/'){
					pos++;
					continue;
				}
				dir[pos] = "";
				pos++;
				while(path[i]>=97 && path[i]<=123){
					dir[pos] += path[i];
					i++;
				}
				i--;
			}
		}
		else{
			cout<<"/";
			for(int i=0; i<=pos; i++){
				cout<<dir[i];
				if(i>0)
					cout<<"/";
			}
			cout<<"\n";
		}
	}
	return 0;
}
