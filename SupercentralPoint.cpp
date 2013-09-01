# include<iostream>

using namespace std;

int main(){
	int n;
	cin>>n;
	int point[n][n];
	for(int i=0; i<n; i++){
		cin>>point[i][0]>>point[i][1];
	}
	int superpoints = 0;
	for(int i=0; i<n; i++){
		int flag = 0;
		for(int j=0; j<n; j++){
			if((point[j][0] > point[i][0]) && (point[j][1] == point[i][1])){
				flag = 1;
				break;
			}
		}
		if(flag == 1){
			flag = 0;
			for(int j=0; j<n; j++){
				if((point[j][0] < point[i][0]) && (point[j][1] == point[i][1])){
					flag = 1;
					break;
				}
			}
		}
		if(flag == 1){
			flag = 0;
			for(int j=0; j<n; j++){
				if((point[j][0] == point[i][0]) && (point[j][1] < point[i][1])){
					flag = 1;
					break;
				}
			}
		}
		if(flag == 1){
			flag = 0;
			for(int j=0; j<n; j++){
				if((point[j][0] == point[i][0]) && (point[j][1] > point[i][1])){
					flag = 1;
					break;
				}
			}
		}
		if(flag == 1){
			superpoints++;
		}
	}
	cout<<superpoints<<"\n";
	return 0;
}
