#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
int main(){
    long long n,m;
    cin>>n>>m;
    long long ucln=__gcd(n,m);
    float bcnn=(n*m)/(float)ucln;
    cout<<ucln<<endl<<bcnn;
}
