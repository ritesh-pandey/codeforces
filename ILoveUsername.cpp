# include<iostream>
# include<vector>

using namespace std;

int main(){
	int n;
	cin>>n;
	int min,max,amazing = 0;
	for(int i=0; i<n; i++){
		int point;
		cin>>point;
		if(i == 0){
			min = point;
			max = point;
			continue;
		}
		else{
			if(max<point){
				amazing++;
				max = point;
			}
			if(min>point){
				amazing++;
				min = point;
			}
		}
		//cout<<"max "<<max<<" min "<<min<<"\n";
	}
	cout<<amazing<<"\n";
	return 0;
}
