#include<iostream>
#include<fstream>
int main(void){
std :: ofstream emp;
emp.open("emp.txt");
if(!emp){
std :: cout << "file isnt created " << std :: endl;
}
else {

std :: cout << "file is created succesfully" << std :: endl;
}
emp<<"hello world";
return 0;
}
