#include<iostream>
using namespace std;
int main(){
    int principle, rate, time;
    cout << "Enter the principle amount: ";
    cin >> principle;
    cout << "Enter the rate of interest: ";
    cin >> rate;
    cout << "Enter the time period: ";
    cin >> time; 
    cout << "Simple interest: " << (principle * rate * time) / 100 << endl;
    return 0;
}