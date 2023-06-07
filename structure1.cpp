#include<iostream>
struct student{
char name[20];
char address[10];
int roll;
};
int main(){
int i,n;
std :: cout << "Enter n" << std :: endl;
std :: cin >>n;

student s[n];
std :: cout << "Enter details" << std :: endl;
for(i=0; i<n; i++){
std :: cin >> s[i].name >> s[i].address >> s[i].roll;
}
std :: cout << "Details are ::" << std :: endl;
for(i=0; i<n; i++){
std :: cout << s[i].name << s[i].address << s[i].roll <<std :: endl;
std :: cout << "another student details :"  << std :: endl;

}
return 0;
} 
