#include <bits/stdc++.h>
using namespace std;
 int main(){
    long long a;
    double sum=1,sum2=0;
    cin>>a;
    for(int i=1;i<=a;i++){
      sum*=i;
      sum2+=(float)1/sum;
    }
    cout<<sum2;
 }
