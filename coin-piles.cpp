#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){
	ll n,a,b;
	cin>>n;
	while(n--){
		cin>>a>>b;
		if(a>b){
			swap(a,b);
		}
		if(b>2*a || (a+b)%3!=0){
			cout<< "NO" <<endl;
		}
		else{
			cout<< "YES"<<endl;
		}
	}	
	return 0;
	
}