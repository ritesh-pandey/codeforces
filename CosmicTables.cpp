#include <iostream>
#include <vector>
#include <cstdio>
#include <string>

using namespace std;

int main(){
	int n,m,k;
	cin>>n>>m>>k;
	vector< vector<int> > p(n, vector<int>(m));
	vector<int> row(n);
	vector<int> col(m);
	for(int i=0; i<n; i++){
		row[i] = i;
		for(int j=0; j<m; j++){
			col[j] = j;
			scanf("%d", &p[i][j]);
		}
	}
	while(k--){
		string q;
		int x,y;
		cin>>q;
		cin>>x>>y;
		x--, y--;
		if(q == "r"){
			int temp = row[x];
			row[x] = row[y];
			row[y] = temp;
			
		}
		else if(q == "c"){
			int temp = col[x];
			col[x] = col[y];
			col[y] = temp;
		}
		else{
			cout<<p[row[x]][col[y]]<<"\n";
		}
	}
	return 0;
}
