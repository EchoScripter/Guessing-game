#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{

    string name;
    cout<<"PLAYER NAME: ";
    getline(cin, name);
    int n=5;

    cout<<"YOU GET 5 TRY"<<endl;

    srand((unsigned int) time(0));

    int number = (rand() % 100) + 1; 
  
    while(n--){
        int guess;
        cout<<"Your Guess: ";
        cin>>guess;
        if(n!=0)
        {
            if (guess > number)
                cout << "Guess lower!" << endl<<endl;
            else if (guess < number)
                cout << "Guess higher" << endl<<endl;
            else
            {
            cout << "YOU WON!!!" << endl;
            cout<<name<<" YOU ARE A PRO!"<<endl;
            break;
            }
            
        }   
        if(n!=0) 
        {
            cout<<"Number of guess left is : "<<n<<endl<<endl;
        }
        else
        {
            cout<<name<<" YOU ARE A NOOB !!!!! BETA TUMSE NA HO PAYEGA "<<endl<<endl;
        }


    }

}
