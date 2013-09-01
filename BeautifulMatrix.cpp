#include <iostream>
#include <vector>

using namespace std;

int main(){
	int r,c;
	for(int i=0; i<5; i++){
		for(int j=0; j<5; j++){
			int n;
			cin>>n;
			if(n == 1){
				r = i;
				c = j;
			}
		}
	}
	r = r-2;
	c = c-2;
	if(r<0)
		r = -1*r;
	if(c<0)
		c = -1*c;
	cout<<r+c<<"\n";
	return 0;
}
