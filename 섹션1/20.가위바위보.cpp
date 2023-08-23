#include<iostream>
#include<algorithm>
using namespace std;


int main(){
	//freopen("input.txt", "rt", stdin);
	
	int i,n,A[101],B[101];
	cin>>n;
	for(i=1; i<=n; i++){
		cin>>A[i];
	}
	for(i=1; i<=n; i++){
		cin>>B[i];
	}
	for(int i=1; i<=n; i++){
	
		if(A[i]==1&&B[i]==3 || A[i]==2&&B[i]==1 || A[i]==3&&B[i]==2){
			cout<<"A"<<endl;
		}
		else if(B[i]==1&&A[i]==3||B[i]==2&&A[i]==1||B[i]==3&&A[i]==2){
	 		cout<<"B"<<endl;
		}
		else cout<<"D"<<endl;
	}
	return 0;
}
