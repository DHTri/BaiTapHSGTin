#include <bits/stdc++.h>
using namespace std;
 int main(){
    long long a;
    double sum=1;
    cin>>a;
    for(int i=2;i<=a;i++) sum*=1+(float)1/(i*i);
    cout<<sum;
 }
