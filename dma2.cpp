//taking name and gpa;;
#include<iostream>
int main(void){
int n,i;
std :: cout <<"enter number "<< std :: endl;
std :: cin>>n;  
int *ptr,*ptrc;
ptr=new int[n];
ptrc =new char[n];
for(i=0;i<n;i++){
std :: cout << "enter id :" << std :: endl;
std :: cin >> ptr[i];
std :: cout << "enter name :" << std :: endl;
std :: cin >> ptrc[i];
}
std :: cout << "printing data :" << std :: endl;
for(i=0;i<n;i++){
std :: cout << *(ptr+i) << "." << std :: endl;
std :: cout << *(ptrc +i);
//std :: cout << endl;

}
delete ptr;
delete ptrc;
return 0;

}
