#include <bits/stdc++.h>
using namespace std;
const int max_n=1004;// 바이트단위 

int main(){
	vector<int> v {1,1,2,2,3,2,1,6,7,3,2};
	auto it= unique(v.begin(), v.end());
	for (int i :v) cout<< i<<" ";
	cout<<"\n";
	//이러지말고
	sort(v.begin(),v.end());
	v.erase(unique(v.begin(),v.end()),v.end());
	for(auto j : v) cout<<j<<" "; 
	cout<<"\n"; 
	
	// max_element
	vector<int> w={1,2,3,4,5,6,7,8,9,10};
	int a= *max_element(w.begin(), w.end());
	auto b= max_element(w.begin(), w.end());
	cout<<a<<"\n";
	cout<<(int)(b-w.begin())<<"\n";
}
