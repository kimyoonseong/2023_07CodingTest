#include<iostream>
using namespace std;


int main(){
	//freopen("input.txt", "rt", stdin);
	int n, i, sum=0,c=1,d=9,res=0;//res=°á°ú, c´Â ÀÚ¸´¼ö°¹¼ö ,d´Â  
	scanf("%d", &n);
	while(sum+d<n){
		res=res+(c*d)	;
		sum=sum+d;
		c++;
		d=d*10;
	}
	res=res+c*(n-sum);
	cout<<res;
	return 0;
}
