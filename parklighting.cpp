#include<iostream>
using namespace std;

int main(){
	
	int t;
	cin>>t;
	
	while(t-->0){
		int n,m;
		cin>>n>>m;
		
		if((n*m)%2==0){
			cout<<(n*m)/2;
		}
		else cout<<((n*m)/2)+1;
		
		cout<<endl;
	}
	return 0;
}
