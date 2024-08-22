#include<iostream>
using namespace std;
//inline function 
inline int func(int& a,int& b){

return (a>b)?(a+b):(b-a);

}
int main (){
int a=1,b=4;
int ans=0;

ans =func(a,b);
cout<<"print the value "<<ans<<endl;

}