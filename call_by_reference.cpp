#include<iostream>
using namespace std;
//swap the two number
/*void swap(int *a, int *b){
int temp=*a;
*a=*b;
*b=temp;


}

int main (){
int a=4,b=5;
cout<<"the value of a= "<< a <<" the value of b= "<< b <<endl;
swap(&a,&b );
cout<<"the value of a= "<< a <<" the value of b= "<< b <<endl;



}*/
//user define swap and sum
/*void swap(int *a,int *b)
{
int temp=*a;
*a=*b;
*b=temp;



}
int main(){
int a,b;
cout<<"enter the number a"<<endl;
cin>>a;
cout<<"enter the number b"<<endl;
cin>>b;
cout<<"before swap  the value a = "<<a<< " swap the value  b ="<<b<<endl;
swap(&a,&b);
cout<<"after swap  the value a = "<<a<< "swap the value  b ="<<b<<endl;
int sum =a+b;
cout<<"the sum of swap ="<<sum<<endl;


}*/
//another method for call by reference
void swap(int &a,int &b){
int temp=a;
a=b;
b=temp;

}
int main(){
int a,b;
cout<<"enter the value of a "<<endl;
cin>>a;
cout<<"enter the value of b "<<endl;
cin>>b;
cout<<"the value of a "<<a<<"the value of b "<<b<<endl;
swap(a,b);
cout<<"the value of a "<<a<<"the value of b "<< b <<endl;


}