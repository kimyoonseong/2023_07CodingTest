#include <iostream>
#include <vector>
#include<string>
using namespace std;

vector<string> split (string input, string delimiter){
	long long pos;
	string token;
	vector<string> ret;
	while((pos=input.find(delimiter))!=string::npos){
		token=input.substr(0,pos);
		ret.push_back(token);
		input.erase(0,pos+delimiter.length());
	}
	ret.push_back(input);
	return ret;
}
int main(){
	//string a="love is pain";
	//cout<< a.substr(5,2);
	//split±â´É
	string s="b877006±èÀ±¼º °æ±âµµ ¿ëÀÎ½Ã ±âÈï±¸",d=" ";
	vector<string> a=split(s,d);
	for(auto c: a) cout<< c<<"\n";
}
