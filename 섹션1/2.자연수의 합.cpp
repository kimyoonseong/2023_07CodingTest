
#include <iostream>
using namespace std;
int main(){
	int n,m,i,sum=0;
	cin>>n>>m;
	for(i=n;i<=m;i++){
		cout<<i	;
		sum+=i;
		if(i==m) break;
		cout<<"+";
		
		
	}
	cout<<"="<<sum;
	return 0;
}
