#include <bits/stdc++.h>
using namespace std;
const int max_n=1004;// 바이트단위 
int a[max_n];
int a2[max_n][max_n]; 
int main(){
	int a[10];
	int b[10][10];
	
	fill(&a[0],&a[10],100); //fill(초기값,마지막값+1, 초기화할 수) 
	for(int i=0; i<10;i++){
		cout<<a[i]<<" ";
	}
	cout<<"\n";
	fill(&b[0][0], &b[9][10], 2);
	for(int i=0; i<10; i++){
		for(int j=0; j<10; j++){
			cout<<b[i][j]<<" ";
		}
		cout<<"\n";
	}
	 
	memset(a,-1,sizeof(a));//(초기화 할 배열, 초기화할 수 , 크기)  
	for(int i=0; i<10; i++){
		cout<<a[i]<<"\n";	
	}
}
