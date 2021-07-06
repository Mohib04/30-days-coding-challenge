#include<iostream>
using namespace std;
int main(){
    double mealCost;
    int tipPersent,taxPersent;
    //get mealCost,tipPersent,taxPersent
    cin>>mealCost;
    cin>>tipPersent;
    cin>>taxPersent;
    //calculate the totalCost
    int totalCost = mealCost+(mealCost*tipPersent)/100+(mealCost*taxPersent)/100;
    cout<<totalCost<<endl;
    return 0;
}
