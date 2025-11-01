#include <iostream>
using namespace std;
int main() {
    long long MOD=1000000007;
    long long n;
    cin>>n;
    long long res=1;
    long long base =2;
    while(n>0){
        if(n%2) res=(res*base)%MOD;
        base=(base*base)%MOD;
        n/=2;
    }
    cout<<res;
    return 0;
}