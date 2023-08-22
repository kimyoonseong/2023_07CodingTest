#include<iostream>
#include<algorithm>
using namespace std;


int main(){
	//freopen("input.txt", "rt", stdin);
	int stu[101];
	int i,n,cnt=0,max;
	cin>>n;
	for(i=1; i<=n;i++){
		scanf("%d",&stu[i]);	
	}
	
	max=stu[n];
	for(i=n-1; i>=1 ;i--){
		if(stu[i]>max){
			max=stu[i];
			cnt++;
		}
	}
	cout<< cnt;
	return 0;
}
