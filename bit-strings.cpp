#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){
	ll n;
	cin>>n;
	ll res=1L;
	ll MOD = 1000000007;
	for(int i=0;i<n;i++){
		res=(res*2)%MOD;
	}
	cout<<res;
return 0;
}

