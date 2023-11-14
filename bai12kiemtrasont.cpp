#include <bits/stdc++.h>
using namespace std;
 int main(){
    long long n;
    cin>>n;
    int sum=0;
    for(int i=1;i<=n;i++){
      if(n%i==0) sum++;
    }
    if(sum==2) cout<<"day la so nt";
    else cout<<"day k phai so nt";
 }
