#include<iostream> //Name:AzmarKashif Section:B Rollno:22i-2716
#include<windows.h> 
void clock(int, int, int);
using namespace std;
int main(){
    int h,m,s;
    clock(h, m, s);
}
void clock(int hr=0, int min=0, int sec=0){
    hr=0, min=0, sec=0;
    while(1){   //1=True means this condtion always remains true and loop will iterate infinitely
        Sleep(2000); //means loop will iterate after every 1 sec
        system("cls"); //function to clear screen
        cout<<"************CLOCK***************"<<endl;
        cout<<hr<<" hours : "<<min<<" minutes :"<<sec<<" seconds "<<endl;
        cout<<"********************************"<<endl;
        sec++;
        if(sec==60){ //this means if 60 seconds pass we increment 1 to minute
            sec=0;
            min++;
            if(min==60){ //this means if 60 minutes pass we increment 1 to hours
                min=0;
                hr++;
            }
        }
    }
}
