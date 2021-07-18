#include <iostream>
#include<math.h>

using namespace std;




int main()
{

    int number,counter=0;
    cin>>number;
    while(number !=0){
        number = number & (number<<1);
        counter++;
    }
    cout<<counter;
    return 0;
}
