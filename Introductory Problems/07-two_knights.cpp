#include <bits/stdc++.h>
using namespace std;

int main() {
	long long k;
	cin>>k;
	for(long long n=1;n<=k;n++){
    cout<< (long long) ((n*n)*((n*n)-1))/2 -4*(n-1)*(n-2)<<"\n";
	}
    return 0;
}
