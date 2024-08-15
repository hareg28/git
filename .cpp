#include<iostream>
#include<fstream>
using namespace std;

struct student {
    int id,mark;
    char name[20],grade;
}s;
void getData(){
    cout<<"enter the id of student:";
    cin>>s.id;
    cout<<"enter the name of student:";
    cin>>s.name;
    cout<<"enter the mark of student:";
    cin>>s.mark;

    if (s.mark>=85&&sd.mark<100){
        s.grade='A'
    }
     else if (s.mark>=70&&sd.mark<85){
        s.grade='B'
    }
     if (s.mark>50&&sd.mark<70){
        s.grade='C'
    }
     if (s.mark>=40&&sd.mark<50){
        s.grade='D'
    }
    else
        s.grade='F'
}
//void upadet(){



}
 int main(){
     int n;
     cout<<"how many student are there:"<<endl;
     cin>>n;
     fstream myfile("student.txt",ios::out|in)
     if(myfile is_open){
     for(int i=0;i<n;i++){
            getData();
        cout<<"id no"<<"\t\t"<<"name"<<"\t\t"<<"grade"<<endl;
        cout<<s.is<<"\t"<<s.name<<"\t"<<s.grade<<endl;
     }

     }
    myfile.close;
 }
