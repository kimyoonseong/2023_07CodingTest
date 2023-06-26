#include<iostream>
using namespace std;
int main(){
	//freopen("input.txt","rt",stdin);
	char a[20];
	cin>>a;
	int age;
	if((a[7]-48)==3||(a[7]-48)==4){
		age=2019-(2000+(a[0]-48)*10+(a[1]-48)-1);
	}
	else age= 2019- (1900+(a[0]-48)*10+(a[1]-48)-1);
	cout<<age<<" ";
	if((a[7]-48)==1||(a[7]-48)==3) cout<<"M";
	else cout<<"W";
}

