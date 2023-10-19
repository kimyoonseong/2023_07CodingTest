#include<iostream>
#include<string>
#include <bits/stdc++.h>
#include<vector>
using namespace std;
/*vector<string> split(int input, int delimenter){
	vector<string> ret;	
	string token="";
	long long pos;
	while((pos=input find(delimiter))!=string::npos){
		token=input.substr(0,pos);
		ret.push_back(token);
		input.erase(0,pos+delimiter.length();	
		
	}
	input.push_back(input);
	
}*/
vector<string> split1(string input, string delimiter){
	vector<string> ret;
	long long pos;
	string token; 
	while((pos=input.find(delimiter)) != string::npos){
		token=input.substr(0,pos);
		ret.push_back(token);
		input.erase(0, pos+delimiter.length());
	}
	ret.push_back(input);
	return ret;
}
int main(){
	string b="love is pain";
	cout<< b.substr(5,2);
	//split±â´É
	string s="b877006±èÀ±¼º °æ±âµµ ¿ëÀÎ½Ã ±âÈï±¸",d=" ";
	vector<string> a=split1(s,d);
	for(auto c: a) cout<< c<<"\n";
}
