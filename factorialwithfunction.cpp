#include<iostream>
using namespace std;
long long int factorial(int x){

    int fact=1;
    int i;
    if(x==0){
return 1;

    }
else{
for(i=1;i<=x;i++){

fact=i*fact;


}
return fact;


}
}


int main(){
    int  n;
long long int result;

cout<<"enter the number "<<endl;
cin>>n;
result=factorial(n);
cout<<"the result is "<<result<<endl;
factorial(n);
return 0;


}