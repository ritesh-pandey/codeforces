# include<iostream>

using namespace std;

int main(){
	int n;
	cin>>n;
	if(n <= 2)
		cout<<"-1\n";
	else{
		for(int i=0; i<n; i++){
			if(i == 0)
				cout<<n-1;
			else if(i == 1)
				cout<<n;
			else
				cout<<n-i;
			if(i != (n-1))
				cout<<" ";
		}
		cout<<"\n";
	}
	return 0;
}
