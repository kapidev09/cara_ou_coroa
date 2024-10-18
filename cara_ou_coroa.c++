
#include<iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
   
    int escolha;
  cout<<"escolha cara ou coroa: " <<endl;
  cout<<"1- cara"<<endl;
  cout<<"2- coroa"<<endl;
  cin>>escolha;
 
unsigned seed = time (0);
           srand(seed);
           rand()%2;
    switch(escolha){
     case 1 :
       
          cout<<"você escolheu: 1- cara"<<endl;
          
          if (seed == 1){
              
                  cout<<"caiu cara"<<endl;
                  
                  cout<<"você acertou";
              }else{
                   cout<<"caiu coroa"<<endl;
                   
                   cout<<"você perdeu";
              };
                break;
        case 2 :
           
           
            cout<<"você escolheu coroa"<<endl;
             if (seed == 2){
                  
                  cout<<"caiu coroa"<<endl;
                  
                  cout<<"você ganhou";
             }else{
                 cout<<"caiu cara"<<endl;
                 cout<<"você perdeu";
             };
             
             break;
            
   
    
 };
 



    return 0;
}

