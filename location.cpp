#include<iostream>
using namespace std;
int main(){
    int a;
    
    cout<<"enter your location:";
    cin>>a;
    if(a == 1){
        cout<<"enter your destination:";
        cin>>a;
        if(a == 2){
            cout<<"enter your destination:";
        }else if (a ==3){
            cout<<"reached destination";
        }else{
            cout<<"input wrong";
        }
 } else if(a == 3){
     cout<<"reached destination";
 }else{
     cout<<"wrong input";
 }
}