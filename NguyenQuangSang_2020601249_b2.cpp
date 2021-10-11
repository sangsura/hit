#include<iostream>
using namespace std;
int snt(int x){
	int dem=0;
	for(int i=1;i<=(x/2);i++){
		if(x%i==0){
			dem++;
		}
	}
	if(dem==1){
		return 1;
	}
	else{
		return 0;
	}
}
int main(){
	int n;
	int a[1000];
	do{
		cin>>n;
	}
	
	while(n<2||n>1000);
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		if(snt(a[i])==0){
			cout<<a[i]<<" ";
		}
	}
	
}
