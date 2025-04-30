#include<bits/stdc++.h>
using namespace std;
long long calculate(long long k){
	return (long long) (k*k*((k*k)-1))/2 - (4*(k-1)*(k-2));
}

int main(){
	long long n;
	cin>>n;
	for(long long i=1;i<=n;i++){
		cout<<calculate(i)<<endl;
	}
	return 0;
}