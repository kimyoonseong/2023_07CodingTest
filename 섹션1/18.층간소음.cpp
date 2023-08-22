#include<iostream>
#include<algorithm>
using namespace std;


int main(){
	//freopen("input.txt", "rt", stdin);

	int i,n,lim,cnt,res=-1,max=-21470000,sec;
	bool check=true;
	cin>>n;
	cin>>lim;
	for(i=0; i<n; i++){
		cin>>sec;
		
		if(sec>lim) cnt++;
		else cnt=0;
		
		if(cnt>max) max=cnt;
	}
	if(max==0) cout<<-1;
	else cout<< max;
	
	
	return 0;
}
