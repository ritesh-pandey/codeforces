# include<iostream>
# include<string>

using namespace std;

int main(){
	string row;
	cin>>row;
	int i=0,j=0;
	int count = 0;
	while(j < row.size()){
		char c = row[i];
		j = i+1;
		while((row[j] == c) && (j-i < 5) && (j < row.size())){
			j++;
		}
		count++;
		i = j;
	}
	cout<<count<<"\n";
	return 0;
}
