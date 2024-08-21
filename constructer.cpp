
#include<iostream>
using namespace std;
class hello{

private:
string name;
int age;
public:
 hello(){
cout<<"default constructer is"<<endl;
name="satyam";
age=12;


}

void display(){
cout<<" the name is "<<name<<endl;
cout<<" the age is "<<age<<endl;


}
};
int main(){

hello s1;
s1.display();

}
