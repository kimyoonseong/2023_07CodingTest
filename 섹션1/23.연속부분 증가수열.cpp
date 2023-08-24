#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;


int main(){
	//freopen("input.txt", "rt", stdin);
	
	int n,  i, j, res=-2,cnt=1;
	scanf("%d " ,&n );
	vector<int> a(n);
	for(i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
	for(i=0;i<n; i++){
		if(a[i]<=a[i+1]){
			
			cnt++;
			//cout<<cnt<<endl; 
		}
		else if(a[i]>a[i+1] && res<cnt){ 
			res=cnt;
			cnt=1;
			//cout<<cnt<<endl; 
		}
		else cnt=1;
	}

	cout<<res;
	return 0;
}
