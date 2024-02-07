#include<iostream>
using namespace std;
int main(){
int n;
cout<<"enter the number"<<endl;
cin>>n;
int i=2;
int sum=0;
while (i<=n){
   if(i%2==0){

    sum=sum+i;
}i++;

}
cout<<sum<<endl;
}

