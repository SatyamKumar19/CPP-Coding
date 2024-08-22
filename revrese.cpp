#include<iostream>
using namespace std;
void abc(int);

int main(){
int n;
cout<<"enter the number "<<endl;
cin>>n;
abc(n);
return 0;


}
void abc(int x){
int rem,rev=0;
while(x!=0){
rem=x%10;
rev=rev*10+rem;
x=x/10;

}
cout<<"the reverse value of "<<rev<<endl;

}