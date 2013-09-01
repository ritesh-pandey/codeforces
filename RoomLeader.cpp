#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
	int n;
	cin>>n;
	vector<string> han;
	int ind = -1, max;
	for(int i=0; i<n; i++){
		string h;
		int p,m,a,b,c,d,e;
		cin>>h>>p>>m>>a>>b>>c>>d>>e;
		han.push_back(h);
		int score = p*100 - m*50 + a + b + c + d + e;
		if(i==0)
			max = score;
		if(max <= score){
			max = score;
			ind = i;
		}
	}
	cout<<han[ind]<<"\n";
	return 0;
}
