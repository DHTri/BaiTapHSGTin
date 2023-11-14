#include <bits/stdc++.h>
using namespace std;
 int main(){
    long long n;
    cin>>n;
    int sum=0;
    for(int i=1;i<n;i++){
      if(n%i==0) sum+=i;
    }
    if(sum==n) cout<<"day la so hoan hao";
    else cout<<"day k phai so hoan hao";
 }
