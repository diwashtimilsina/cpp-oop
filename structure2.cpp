#include<iostream>
struct dob{
int day;
char month[17];
int year;
};
struct student{
char name[15];
char address[15];
int id;
dob d;
};
int main(){
int i ,n;
student s[n];

std :: cout << "enter total number of student s:: " << std :: endl;
std :: cin >> n;
for(i=0; i<n; i++){
std :: cout << " enter name" << std :: endl;
std :: cin >> s[i].name;
std :: cout << "address " << std :: endl;
std :: cin >> s[i].address;
std :: cout << "id " << std :: endl;
std :: cin >> s[i].id;
std :: cout << "day " << std :: endl;
std :: cin >> s[i].d.day;
std :: cout << " month" << std :: endl;
std :: cin >> s[i].d.month;
std :: cout << " year" << std :: endl;
std :: cin >> s[i].d.year;


} 

std :: cout << "yoou entered" << std :: endl;
for(i=0; i<n; i++){

std :: cout << i+1 << "stdudent detail " << std :: endl;
std :: cout << s[i].name << s[i].address << s[i].id << s[i].d.day << s[i].d.month << s[i].d.year << std :: endl;

}
return 0;
}
