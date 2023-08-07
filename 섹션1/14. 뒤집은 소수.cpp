#include<iostream>
using namespace std;

int ch[10];
int reverse(int x){
	int ct=0,rt=0,cnt=0;
	while(x>0){
		ct=x%10;
		rt=rt*10+ct;
		x=x/10;
		//ct=ct+rt;
		//rt=ct*10;

	}
	return rt;
}
bool isPrime(int x){
	int cnt=0;
	for( int i=1; i<=x;i++){
		if(x%i==0){
			cnt++;
		}
	}	
	if(cnt==2) return true;
	else return false;	
}

int main(){
	//freopen("input.txt", "rt", stdin);
	int i,n,rev,num;
	bool tf;
	cin>>n;
	for( i=0; i<n; i++){
		cin>>num;
		rev=reverse(num);
		//cout<<rev<<endl;
		tf=isPrime(rev);
		if(tf==true){
			cout<<rev<<" ";	
		}
	}
	
		
	return 0;
}
