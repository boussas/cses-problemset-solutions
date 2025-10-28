#include <iostream>
using namespace std;

int main() {
    long long n;
    cin >> n;
    long long s=0;
    for(int i=1;i<n;i++){
        long long tmp;
        cin>>tmp;
        s+=tmp;
    }
    cout<<((n*(n+1))/2)-s;

    return 0;
}
