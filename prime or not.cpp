#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the number"<<endl;
    cin>>n;
    int i=2;
    while(i<n)
    {
       if(n%i==0){
        cout<<" it is not prime "<< i <<endl;
       }
       else{
        cout<<" it is prime "<< i <<endl;
        }

    i++;
    }

}
