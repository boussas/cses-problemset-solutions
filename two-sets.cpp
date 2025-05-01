#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	ll n;
	cin>>n;
	if ((n*(n+1)/2)%2!=0){
		cout<<"NO"<<endl;
	}
	else{
		cout<<"YES"<<endl;
		vector<ll>f;
		vector<ll>s;
		if (n%2==0){
			for(int i=0;i<n/2;i++){
				if(i%2 ==0){
					f.push_back(i+1L);
					f.push_back(n-i);
				}
				else{
					s.push_back(i+1L);
					s.push_back(n-i);
				}
			}
			
		}
		else{
			for(int i=0;i<(n-1)/2;i++){
				if(i%2 ==0){
					f.push_back(i+1L);
					f.push_back(n-i-1);
				}
				else{
					s.push_back(i+1L);
					s.push_back(n-i-1);
				}
			}
			if(f.size()>s.size()){
				s.push_back(n);
			}
			else{
				f.push_back(n);
			}
			
		}
		cout<<f.size()<<endl;
		for(ll i:f){
			cout<<i<<" ";
		}
		
		cout<<"\n";
		cout<<s.size()<<endl;
		for(ll i:s){
			cout<<i<<" ";
		}
	}
	
	return 0;
}