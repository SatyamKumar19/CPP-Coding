#include<iostream>
using namespace std;
int main(){
char ch;
cout<<"enter the value of ch"<<endl;
cin>>ch;
if(ch>='a'&&ch<='z'){
    cout<<"this is lowercase"<<ch<<endl;
}else if(ch>='A'&&ch<='Z'){
cout<<"this is uppercase"<<endl;}
else
{
    cout<<"this is integer"<<endl;
}
return 0;
}
