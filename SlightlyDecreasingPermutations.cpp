#include <iostream>
#include <cstdio>
#include <cstdlib>

using namespace std;

int main(){
	int n,k;
	cin>>n>>k;
	for(int i=0; i<k; i++){
		cout<<n<<" ";
		n--;
	}
	for(int i=1; i<=n; i++){
		if(i==n)
			cout<<i;
		else
			cout<<i<<" ";
	}
	cout<<"\n";
	return 0;
}
