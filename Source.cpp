#include <iostream>
#include <string>
using namespace std;

int main()
{
    for(int i = 0 ; i < 51; i++){
        cout<<".";
    }
    cout<<"\nITCS 2530 - Programmin Assignmment for week #3\n";
    for(int i = 0 ; i < 51; i++){
        cout<<".";
    }
    string itemName,destination;
    char fragile;
    double orderTotal,shipping,shippingTotal;
    cout<<"\n\nPlease enter the item name (no spaces)............:";
    cin>>itemName;
    cout<<"is the item fragile? (y=yes/n=no).................:";
    cin>>fragile;
    cout<<"Please enter your order total.....................:";
    cin>>orderTotal;
    cout<<"Please enter destination. (usa/can/aus)...........:";
    cin>>destination;
    cout<<"\n";
    if(orderTotal>150){
        shipping= 0 ;
    }else if(orderTotal>100 && orderTotal<=150){
        if(destination=="usa"){
            shipping= 6 ;
        }else if(destination=="can"){
            shipping= 8;
        }else{
            shipping= 10;
        }
    }else if(orderTotal>50 && orderTotal<=100){
        if(destination=="usa"){
            shipping= 9 ;
        }else if(destination=="can"){
            shipping= 12;
        }else{
            shipping= 14;
        }
    }else{
        if(destination=="usa"){
            shipping= 12 ;
        }else if(destination=="can"){
            shipping= 15;
        }else{
            shipping= 17;
        }
    }
    if(fragile=='y'){
        shipping+=2;
    }

    shippingTotal=orderTotal+shipping;
    cout<<"your item is..........................."<<itemName<<endl;
    cout<<"your shipping cost is..................$"<<shipping<<endl;
    cout<<"your are shipping to..................."<<destination<<endl;
    cout<<"your total shipping costs are..........$"<<shippingTotal<<endl;
    cout<<".......................................Thank You!";
    return 0;
}
