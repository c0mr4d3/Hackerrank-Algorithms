#include <bits/stdc++.h>

using namespace std;
int main(){
    int a[5];
    for(int i=0;i<5;i++){
        cin>>a[i];
    }
    sort(a,a+5);
    int s1=0,s2=0;
    for(int i=0;i<4;i++){
        
        s1+=a[i];
        }
    
    for(int i=1;i<5;i++){
      
        s2+=a[i];
    }
        cout<<s1<<" "<<s2;
    
    
    
}