#include <bits/stdc++.h>
using namespace std;
int main(){
	long long n;
	vector<int>v;
	cin>>n;
	long long t;
	for(int i=0;i<n;i++){
		cin>>t;
		v.push_back(t);
	}
	long long res=0;
	for(int i=0;i<n-1;i++){
		if(v[i]>v[i+1]){
			res+=v[i]-v[i+1];
			v[i+1]=v[i];
		}
	}
	cout<<res;
	
	return 0;
}