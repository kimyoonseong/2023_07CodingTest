#include<iostream>
#include<algorithm>
using namespace std;


int main(){
	//freopen("input.txt", "rt", stdin);

	int i,n,cnt,anw,res=0;
	cin>>n;
	for(i=0; i<n;i++){
		cin>>cnt;
		cin>>anw;
		for(int j=1;j<=cnt;j++){
			res+=j;		
		}
		if(res==anw){
			cout<<"YES";
		}
		else {
			cout<<"NO";	
		}
		res=0;
	}	
	 

	return 0;
}
