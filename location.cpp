#include<iostream>
using namespace std;
int main(){
    int a,b;
    
    cout<<"Enter your location:";
    cin>>a;
    cout<<"destination:";
    cin>>b;
    cout<<"your destination is:";
    if(a == 1){
        if(b == 1){
            cout<<"1-1";
        }else if(b == 2){
            cout<<"1-2";
        }else if(b == 3){
            cout<<"1-2-3";
        }else{
            cout<<"input wrong";
        }
    }if(a == 2){
        if(b == 2){
            cout<<"reached 2-2";
        }else if(b == 3){
            cout<<"reached 2-3";
        }else if(b == 4){
            cout<<"reached 2-3-4";
        }else{
            cout<<"input wrong";
        }
    }if(a == 3){
        if(b == 1){
            cout<<"reached 3-1";
        }else if(b == 2){
            cout<<"reached 3-2";
        }else if(b == 3){
            cout<<"reached 3-3";
        }else{
            cout<<"input wrong";
        }
    }
}