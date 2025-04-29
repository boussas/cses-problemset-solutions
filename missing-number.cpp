#include <bits/stdc++.h>
using namespace std;
int main(){
	long long n;
	long long temp;
	cin>>n;
	vector<int>m;
	for(int i=0;i<n-1;i++){
		cin>>temp;
		m.push_back(temp);
	}
	long long s=0;
	for(long long i:m){
		s+=i;
	}
	cout<<(n*(n+1)/2) - s;
	
	return 0;
}