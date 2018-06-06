#include <bits/stdc++.h>

using namespace std;
int n;
// Complete the staircase function below.
void staircase(int x) {
    for(int i=0;i<x-1;i++)
        cout<<" ";
    for(int i=0;i<n-x+1;i++)
        cout<<"#";
    cout<<endl;
    if (x!=1)
        staircase(x-1);
    else return;

}

int main()
{
    
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    staircase(n);

    return 0;
}
