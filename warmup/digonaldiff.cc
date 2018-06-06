#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,d1=0,d2=0;
    cin>>n;
    int a[n*n];
    for(int i=0;i<n*n;i++){
        cin>>a[i]; 
    }
    int lim1 = (n*n)/(n+1);
    for(int i=0;i<=lim1;i++){
        int temp = (n+1)*i;
        d1+=a[temp];
    }
    
    for(int i=1;i<=lim1+1;i++){
        int temp = (n-1)*i;
        d2+=a[temp];
    }
    
    cout<<abs(d1-d2);
    return 0;
    
}