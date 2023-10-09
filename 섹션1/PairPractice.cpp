#include<iostream>
#include<string>
#include <bits/stdc++.h>
#include<vector>
using namespace std;
//pair<int,int> pi;
//tuple< int,int,int>tl;
int main(){
	int a,b,c;
	vector<pair<int,int>> v;

	/*
	pi={1,2}; //pi=make_pair{1,2};
	tl=make_tuple(1,2,3); 
	tie(a,b)=pi; //<- pi.first, pi.second¾ÈÇØµµµÊ
	//cout<<a<<":"<<b<<"\n";
	a=get<0>(tl);
	b=get<1>(tl);
	c=get<2>(tl);
	//tie(a,b,c)=tl;
	//cout<<a<<b<<c<<"\n"; //<-a=get<0>(tl); 
	*/
	for(int i=1; i<=5; i++){
		v.push_back({i,i});	
	}

	for(auto t: v){
		cout<<t.first<<t.second<<"\n";	
	}

}
