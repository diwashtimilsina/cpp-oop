#include<iostream>
#include<fstream>
int main(void){
std :: ofstream filename;
filename.open("filename.txt");
if(!filename){
std :: cout << "not created" << std :: endl;
}
else{
std :: cout << "file created" << std :: endl;
}

return 0;
}
