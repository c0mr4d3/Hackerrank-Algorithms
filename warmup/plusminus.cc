#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,temp;
    cin>>n;
    int pos=0,neg=0,zer=0;
    for(int i=0;i<n;i++){
        cin>>temp;
        if (temp>0)
            pos++;
        else if (temp<0)
            neg++;
        else zer++;
    }
    
    cout<<pos/((double)n)<<endl<<neg/((double)n)<<endl<<zer/((double)n);
}