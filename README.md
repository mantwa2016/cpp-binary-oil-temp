  #include <iostream>
using namespace std;

int main(){
    int temp_1,temp_2,temp_3;

    cout<<"enter temp_1\n";
    cin>>temp_1;
    cout<<"enter temp_2\n";
    cin>>temp_2;
    if(temp_2-temp_1>50){
        cout<<"reduce fryer heat before taking third reading\n";
    }
    else if(temp_2-temp_1<10){
        cout<<"increase the fryer heat before taking the third reading\n";
    }
    cout<<"enter temp_3\n";
    cin>>temp_3;
    if(temp_3<190 && temp_3>150){
        cout<<"you may start frying the magwinyas\n";
    }
    else{
        cout<<"oil is not ready for frying\n";
    }
    return 0;
}
