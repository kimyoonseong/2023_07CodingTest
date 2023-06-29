#include<iostream>
using namespace std;
int main(){
	//freopen("input.txt","rt",stdin);
	char a[101],b[101];
	int p=0;
	gets(a);//공백문자 취급할때 
	for(int i=0; a[i]!='\0';i++){
		if(a[i]!=' '){
			if(a[i]>64&& a[i]<=90){
				b[p]=a[i]+32;
				p++;
				
			}
			if(a[i]>96&&a[i]<=122){
				b[p]=a[i]; 
				p++;
			}
		}
		
		
	}
	b[p]='\0';
	cout<<b;
	/*
	for(int i=0; b[i]!='\0';i++){
		cout<<b[i];	
	}
	*/
}

