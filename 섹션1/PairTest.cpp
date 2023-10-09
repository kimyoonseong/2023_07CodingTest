#include<bits/stdc++.h>
using namespace std;
vector<int> v1;
int main(){
	vector<pair<int,int>> v;
	for(int i=1; i<=5; i++){
		v.push_back({i,i});	
	}
	for(auto b:v){
	//	cout<<b.first<<b.second;	
	}
	
	char a='a';
	cout<<a-'a';
	

	
	for(int i=1; i<=5; i++){
		v1.push_back(i);	
	}
	for(int i=0; i<5; i++){
		cout<<*(v1.begin()+i);	//포인터로 해야함.. 가르키니깐 
	}
	for(auto t=v1.begin(); t!=v1.end(); t++){
		//cout<<t;
		cout<<*t;	
	}
}
