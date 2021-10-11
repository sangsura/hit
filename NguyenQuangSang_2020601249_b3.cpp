#include<iostream>
using namespace std;

int main(){
	int n,k;
	int a[1000];
	do{
		cin>>n>>k;
	}
	
	while(n<1||n>1000||k>=n);
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int sum=0;
	for(int i=0;i<k;i++){
		sum+=a[i];
	}
		cout<<sum;
}
	

