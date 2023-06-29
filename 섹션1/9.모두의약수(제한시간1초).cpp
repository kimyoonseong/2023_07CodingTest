#include<iostream>
using namespace std;
int cnt[50001];
int main(){
	//freopen("input.txt","rt",stdin);
	int i,j,a;
	cin>>a;
	for (i=1;i<=a;i++){
		for(j=i;j<=a;j=j+i){
			 cnt[j]++;
		}						
	}
	for (i=1; i<=a;i++){
		cout<<cnt[i];	
	}
	//타임리미트. 
}

