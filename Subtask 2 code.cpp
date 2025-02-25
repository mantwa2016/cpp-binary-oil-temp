#include <iostream>
using namespace std;
//9310010734089 MOKOENA M

int main(){
    int temp_1,temp_2,temp_3;
    //Below the user is requested to input temperature
    
    cout<<"enter temp_1\n";
    cin>>temp_1;
    cout<<"enter temp_2\n";
    cin>>temp_2;
    //If statements to guide the user on the correct frying temperatures
    
    if(temp_2-temp_1>50)// If condition to measure the suitability of the oil after the second reading{
        cout<<"reduce fryer heat before taking third reading\n";
    }
    else if(temp_2-temp_1<10){
        cout<<"increase the fryer heat before taking the third reading\n";
    }
    //Temperature 3 frying guidelines via appropriate if statements
    cout<<"enter temp_3\n";
    
    cin>>temp_3;//Temperature 3 input line
    
    if(temp_3<190 && temp_3>150){
        cout<<"you may start frying the magwinyas\n";//Message to indicate that the user can start frying
    }
    else{
        cout<<"oil is not ready for frying\n";//Message to indicate unreadiness
    }
    return 0;
}
