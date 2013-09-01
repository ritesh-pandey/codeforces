# include<iostream>

using namespace std;

int main(){
	int n;
	cin>>n;
	int max = 0;
	int current = 0;
	while(n--){
		int a,b;
		cin>>a>>b;
		current += (b-a);
		if(max < current)
			max = current;
	}
	cout<<max<<"\n";
	return 0;
}
