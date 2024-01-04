#include<iostream>
#include<cstdlib>
#include<ctime>
#include<conio.h>

using namespace std;
int main()
{
    srand((unsigned int) time(NULL));
    int num = (rand() % 100) + 1;
    int guess = 0;

    do
    {
        cout<<"Enter your Guess(1-100): ";
        cin>>guess;
        if(guess > num)
            cout<<"Guess Lower!\n";
        else if(guess < num)
            cout<<"Guess higher!\n";
        else
            cout<<"You Won!\n";

    } while (guess != num);
    cout<< "\nGuessed number is "<<guess<<endl;
    getch();
    return 0;
}