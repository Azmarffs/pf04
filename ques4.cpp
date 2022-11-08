#include<iostream>   //Name: AzmarKashif Section:B Roll no: 22i-2716
#include<string>
#include<cstdlib>
#include<ctime>
using namespace std;
void game(){
    srand(time(NULL));
    int subj=rand()%3+1; //rand func for subjects
    int prob=rand()%100; //rand func to check for probability
    int qs;
    int totalPrice=rand()%15000;
    int price=0;
    for(int i=1;i<=15;i++){
    switch(subj){
        case 1:    
        if(subj==1){ //if rand gives val 1
            cout<<"PopCulture"<<endl;
            cout<<"Sports"<<endl;
            cout<<"Sciences"<<endl;
            cout<<"History"<<endl;
            int i=0;   
            while(i<=15){
            if(prob>=50 && prob<=100){    
                if(qs>=1 && qs<=3){
                    price+=100;
                    prob-=10;
                    if(qs>=4 && qs<=6){
                        price+=1000;
                        prob-=10;
                        if(qs>=7 && qs<=10){
                            price+=10000;
                            prob-=10;
                            if(qs>=10 && qs<=15){
                                price+=15000;
                                prob-=10;
                                cout<<price;
                            }
                        }
                    }
                }
            }
        break;
            }
        }
        case 2:  //if rand gives val 2
        if(subj==2){
            cout<<"PopCulture"<<endl;
            cout<<"Sports"<<endl;
            cout<<"Sciences"<<endl;
            cout<<"History"<<endl;
            if(prob>=50 && prob<=100){    
                if(qs>=1 && qs<=3){
                    price+=100;
                    prob-=10;
                    if(qs>=4 && qs<=6){
                        price+=1000;
                        prob-=10;
                        if(qs>=7 && qs<=10){
                            price+=10000;
                            prob-=10;
                            if(qs>=10 && qs<=15){
                                price+=15000;
                                prob-=10;
                                cout<<price;
                            }
                        }
                    }
                }
            }
        }
        case 3:  //if rand gives val 3
        if(subj==3){
            cout<<"Sports"<<endl;
            cout<<"History"<<endl;
            cout<<"PopCulture"<<endl;
            cout<<"Sciences"<<endl;
            if(prob>=50 && prob<=100){    
                if(qs>=1 && qs<=3){
                    price+=100;
                    prob-=10;
                    if(qs>=4 && qs<=6){
                        price+=1000;
                        prob-=10;
                        if(qs>=7 && qs<=10){
                            price+=10000;
                            prob-=10;
                            if(qs>=10 && qs<=15){
                                price+=15000;
                                prob-=10;
                                cout<<price;
                            }
                        }
                    }
                }
            }
        }
        case 4:   //if rand gives val 4
        if(subj==4){
            cout<<"Sports"<<endl;
            cout<<"History"<<endl;
            cout<<"PopCulture"<<endl;
            cout<<"Sciences"<<endl;
            if(prob>=50 && prob<=100){    
                if(qs>=1 && qs<=3){
                    price+=100;
                    prob-=10;
                    if(qs>=4 && qs<=6){
                        price+=1000;
                        prob-=10;
                        if(qs>=7 && qs<=10){
                            price+=10000;
                            prob-=10;
                            if(qs>=10 && qs<=15){
                                price+=15000;
                                prob-=10;
                                cout<<price;
                                totalPrice+=price;
                            }
                        }
                    }
                }
            }
        }
    }
    }  
    cout<<"Total price is you won is : "<<totalPrice;
}
int main(){
    game(); //calling func
}
            