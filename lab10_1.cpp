// cout << "Press Enter 3 times to reveal your future.";
// cout << "You will get A in this 261102.";
#include<iostream>
#include<string>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
 
    int num;
    cout << "Press Enter 3 times to reveal your future.\n";
    cin.get();
    cin.get();
    cin.get();
    
    srand(time(0));
    num=rand()%9;

    if(num==0)
    cout << "You will get A in this 261102.";
    else if(num==1)
    cout << "You will get B+ in this 261102.";
    else if(num==2)
    cout << "You will get B in this 261102.";
    else if(num==3)
    cout << "You will get C+ in this 261102.";
    else if(num==4)
    cout << "You will get C in this 261102.";
    else if(num==5)
    cout << "You 6ill get D+ in this 261102.";
    else if(num==6)
    cout << "You will get D in this 261102.";
    else if(num==7)
    cout << "You will get F in this 261102.";
    else 
    cout << "You will get W in this 261102.";
    
    
    return 0;
}

