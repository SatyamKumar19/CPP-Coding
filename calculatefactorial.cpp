#include<iostream>
using namespace std;
long long int factorial(int x){
long long int fact=1;
int i,sum=0;
if (x == 0)
{
    return 1;
}
 
else
{

for(i=1;i<=x;i++){

    fact=fact*i;
    sum=sum+fact;
}
return sum;


}}


int main(){
int n;
long long int result;
cout<<"enter the number n"<<endl;
cin>>n;
result=factorial (n);
cout<<"the result is "<<result<<endl;
factorial(n);
return 0;

}