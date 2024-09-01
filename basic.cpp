#include<iostream>
using namespace std;
int main(){

    int n;
    cout<<"enter the number";
    cin>>n;
    if(n>=65||n<=92){
        cout<<"ascii value = "<< char(n) <<endl;
    }
    else{
        cout<<"default value"<<endl;
    }
}