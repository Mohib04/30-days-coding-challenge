#include <bits/stdc++.h>

using namespace std;




int main()
{
    int n;
    cin>>n;
    if(n%2==0){
        ///check n is getter then or equal 2 and less than or equal 5
        if(n>=2 && n<=5){
            cout<<"Not Weird"<<endl;
        }
        ///check n is getter then or equal 6 and less than or equal 20
        if(n>=6 && n<=20){
            cout<<"Weird"<<endl;
        }
        ///Check if n is getter than 20
        if(n>20){
            cout<<"Not Weird"<<endl;
        }

    }
    else{
        cout<<"Weird"<<endl;
    }

    return 0;
}

