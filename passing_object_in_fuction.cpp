#include<iostream>
using namespace std;
//passing the object at function in class
class hello{
int a;
int b;
public:
void star(int v1,int v2){

a=v1;
b=v2;

}
void star(hello o1,hello o2){
a=o1.a+o2.a;
b= o2.b+o2.b;


}
void printnumber(){
cout<<"print the number a "<< a <<" print the number of b "<< b << " the sum of "<< a+b <<endl;

}



};
int main(){

hello c1,c2,c3;
c1.star(2,3);
c1.printnumber();
c2.star(4,5);
c2.printnumber();

}