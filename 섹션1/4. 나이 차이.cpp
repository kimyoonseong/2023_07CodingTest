
#include <iostream>
using namespace std;
int main(){
	int i,max=-21960000,min=21960000;
	int n[100],m;
	cin>>m;
	for (i=0;i<m;i++){
		cin>>n[i];
	}
	
	for (i=0;i<m;i++){
		//cout<<n[i]<<endl;
		if(n[i]>max){
			max=n[i];
		}
		if(n[i]<min){
			min=n[i];
			
		}
	}

	cout<<max-min;
	return 0;
}
