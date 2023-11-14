#include <bits/stdc++.h>
using namespace std;
 int main(){
    long long a;
    double sum=0;
    cin>>a;
    for(int i=1;i<=a;i++) sum+=(float)i/(i+1);
    cout<<sum;
 }
