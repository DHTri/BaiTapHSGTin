#include <bits/stdc++.h>
using namespace std;
 int main(){
    long long a;
    double sum2=0;
    cin>>a;
    for(int i=1;i<=a;i++){
      if(i%2==0) sum2+=(float)1/i*-1;
      else sum2+=(float)1/i;
    }
    cout<<sum2;
 }
