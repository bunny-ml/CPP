#include <iostream>
// #include <ostream>
// #include <string>
#include <chrono>
#include <cstdio>





using namespace std;

int main(){

     auto start = chrono::high_resolution_clock::now();

   
  


    
    // std::cout <<"hello there!"<<std::endl;
    // cout<<"you have to get a job in next month or in next 2 months!\n";
    // cout<<"changes" <<endl;
    // cout<<"hello";
    // puts("click on button");
    // puts("layer");
    // puts("player");


    // string first_name;
    // string last_name;
    // string gender;

    // cout<<"what is your first name: ";
    // getline(cin , first_name);

    // cout<<"what is your last name: ";
    // getline(cin , last_name);

    // cout <<"what is your gender (M , F): ";
    // getline(cin , gender);


    // cout <<"Nice to meet you " << first_name <<" "<<last_name <<endl;


    auto start1 = std::chrono::system_clock::now();

    /* do some work */
    
    




    // int cards;
    // cards = 52;

    // int my_cards = cards;
    
    // int *myp;
    // myp = &my_cards;
    // my_cards = *myp;

    // printf("pointer(*myp) address for my_cards %d\n" , myp);

    // printf("what is the value of my_cards %d\n" , my_cards);
    
    // printf("what is the value of cards %d\n" , cards);





    auto end = chrono::high_resolution_clock::now();
    chrono::duration<double> duration = end - start;
 
    // Print execution time
    cout<<"Code Execution took: " << duration.count() <<  " sec" <<endl;
    return 0;  //return type
} 


