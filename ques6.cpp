#include<iostream> //Name:AzmarKashif Section:B Roll no:22i-2716
using namespace std;
void lookAndSay(){
    int num=1, tNum, counterVar, newN=0, j=1;
    for(int i=1;i<=7;i++){
        cout<<i<<"."<<num<<endl; //printing first num as it is
        newN=0;
        j=1;  
        while(!(num==0)){  //this loop continues till num gets equal to zero
            tNum=num%10;  //this gives us the unit part of num
            num=num/10;   //this gives us the num except unit part
            counterVar=1;
            while(!(tNum!=num%10)){   
                counterVar++; 
                num=num/10;
            }
            newN=(((counterVar*10)+tNum)*j) + newN; //property for ex: 123=1*100+2*10+1*1
            j*=100;
        }
        num=newN;  
    }
}
int main(){
    lookAndSay(); //calling func
}