#include<iostream>
using namespace std;

int digit_sum(int x){
	int sum=0, tmp;
	while(x>0){
		tmp=x%10;
		sum=sum+tmp;
		x=x/10;
	}
	return sum;
}

int main(){
	//freopen("input.txt","rt",stdin);
	int sum,i,n,num,max=-21470000,res;
	scanf("%d",&n);
	for (i =0;i<n; i++){
		scanf(" %d", &num);
		sum=digit_sum(num);
		if(max<sum){
			max=sum;	
			res=num;
		}
		else if (sum==max){
			if(num>res) res=num;
			
		}
	}
	printf("%d",res);
	return 0;
}

