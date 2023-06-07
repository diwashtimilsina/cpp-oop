#include<iostream>
#include<fstream>

struct student{
int id;
char name[15];
char address[15];
};

int main(){
student s[5];
int i,n;
std :: cout << "enter n value";
std :: cin >> n;
std :: cout << "enter details of students :: " << std  :: endl;
for(i=0; i<n; i++){
std :: cin >> s[i].name >> s[i].address;
}

std :: ofstream fout("student.txt");
//student.open("student.txt");
for(i=0; i<n; i++){
 fout << s[i].name << s[i].address;
}
fout.close();

//opening in reading mode;;;
std :: ifstream fin("student.txt");
for(i=0;i<n;i++){
fin >> s[i].name >> s[i].address;
}
for(i=0;i<n;i++){

std::cout<<s[i].name << s[i].address;
}
return 0;
}
