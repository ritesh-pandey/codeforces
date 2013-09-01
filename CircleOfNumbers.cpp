#include <iostream>
#include <vector>

using namespace std;

int main(){
	int n;
	cin>>n;
	vector<int> v1(n+1,0);
	vector<int> v2(n+1,0);
	vector<int> freq(n+1,0);
	for(int i=0; i<2*n; i++){
		int a,b;
		cin>>a>>b;
		freq[a]++;
		freq[b]++;
		if(v1[a] == 0)
			v1[a] = b;
		else
			v2[a] = b;
	}
	int flag = 0;
	for(int i=1; i<=n; i++){
		if(freq[i] != 4){
			flag = 1;
			break;
		}
	}
	if(flag == 1){
		cout<<"-1";
		return 0;
	}
	vector<int> cycle(n+1,0);
	for(int i=1; i<=n; i++){
		if(cycle[v1[i]] == 0)
			cycle[v1[i]] = v2[i];
		else
			cycle[v2[i]] = v1[i];
	}
	int j=cycle[1];
	for(int i=1; i<=n; i++){
		cout<<j;
		j = cycle[j];
		if(i != n)
			cout<<" ";
	}
	cout<<"\n";
	return 0;
}
