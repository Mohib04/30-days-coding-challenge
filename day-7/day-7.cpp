#include <bits/stdc++.h>

using namespace std;



int main()
{


    int A[1000];
    int n;
    cin>>n;
    ///Get the array's value from keyboard
    for(int i=0; i<n; i++){
        cin>>A[i];
    }
    int r = n-1;
    ///Print the revers array
    for(int j=r; j>=0; j--){
        cout<<A[j]<<" ";
    }

    return 0;
}
