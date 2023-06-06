#include<iostream>
int main(void){
int i,num;
std:: cout <<"Enter a number" << std :: endl;
std :: cin >> num;
int *ptr;
ptr = new int[num];
std:: cout <<"Enter gpa: " << std :: endl;
for(i=0;i<num; i++){
std :: cin >> ptr[i];
}
std :: cout << "gpa is :" <<std :: endl;
for(i=0; i<num; i++){
std :: cout << *(ptr+i) << std :: endl;
}
delete ptr;
return 0;
}
