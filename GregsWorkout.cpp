# include<iostream>
# include<vector>

using namespace std;

int main(){
	int n;
	cin>>n;
	vector <int> body(3,0);
	int j=0;
	for(int i=0; i<n; i++){
		int a;
		cin>>a;
		body[j] += a;
		j = (j+1)%3;
	}
	int max = 0;
	for(int i=0; i<3; i++){
		if(max < body[i]){
			max = body[i];
			j = i;
		}
	}
	if(j==0)
		cout<<"chest\n";
	else if(j==1)
		cout<<"biceps\n";
	else
		cout<<"back\n";
	return 0;
}
