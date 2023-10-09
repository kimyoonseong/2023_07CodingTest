#include<bits/stdc++.h>
using namespace std;
int main(){
	vector<pair<int,int>> v;
	for(int i=1; i<=5; i++){
		v.push_back({i,i});	
	}
	for(auto b:v){
		cout<<b.first<<b.second;	
	}
}
