
//this keyword - pointer to current object
//static function can only access static member

#include<bits/stdc++.h>
using namespace std;

class hero
{
    //properties
    private:
    int health;
    public:
    char *name;
    char level;
    static int timetocomplete;

    hero()
    {
        cout<<"constuctor called"<<endl;
        name = new char[100];
    }

    //parameterised constructor
    hero(int health)
    {
        this -> health =health;
    }
    hero(int health, char level)
    {
        this -> level = level;
        this -> health = health;
    }

    //copy constructor(& use because it a copy constructor and it makes a loop between hero class and temp variable)
    hero(hero &temp)            
    {
        char *ch = new char[strlen(temp.name) + 1];
        strcpy(ch, temp.name);
        this -> name = ch;
        cout<<"copy constructor called"<<endl;
        this->health = temp.health;
        this->level = temp.level;
    }

    void print()
    {
        cout<<endl;
        cout<<"name is"<<this->name<<endl;
        cout<<"level is"<<this->level<<endl;
        cout<<"health is"<<this->health<<endl;

    }

    int gethealth()
    {
        return health;
    }

    char getlevel()
    {
        return health;
    }

    void sethealth(int h)
    {
        

        health = h;
    }

    void setlevel(char ch)
    {
        level = ch;
    }

    void setname(char name[])
    {
        strcpy(this -> name, name);
    }

    //declaration of static function and it can only access the static data types
    static int random()
    {
        return timetocomplete;
    }

    //destructor

    ~hero()
    {
        cout<<"destructor is called"<<endl;
    }

    
};

//static member initialised
int hero::timetocomplete = 5;



int main()
{


    cout<< hero::random()<<endl;
    //static member called
    //cout<<hero::timetocomplete <<endl;









    //statically allocated - destructor is automatically excuted in statically allocated 
    /*hero a;


    //dynamically allocated - destructor is not automatically called in dynamically allocated, we have to use delete to use destructor
    hero *b = new hero;
    delete b;
    










    /*
    hero hero1;
    hero1.sethealth(12);
    hero1.setlevel('D');
    char name[100] = "kaka";
    hero1.setname(name);

    hero1.print();

    hero hero2(hero1);
    hero2.print();

    hero1.name[0] = 'J';
    hero1.print();

    hero2.print();








   

    /*hero S(70, 'A');
    S.print();



    //calling of copy constructor
    hero R(S);
    R.print();














    //obect create statically

    /*cout<<"hi"<<endl;
    hero kaka;
    cout<<"hello"<<endl;

    //dynamic creation of object
    hero *h = new hero;










    //static allocation
    /*
    hero kaka;
    kaka.sethealth(80);
    kaka.setlevel('A');
    cout<<"level of kaka"<<kaka.level<<endl;
    cout<<"health is"<<kaka.gethealth()<<endl;


    //dynamically allocation
    hero * akak = new hero;
    akak->setlevel('B');
    akak->sethealth(70);
    cout<<"level of akak"<<(*akak).level<<endl;
    cout<<"health of akak"<<(*akak).gethealth()<<endl;

    cout<<"level is"<<akak->level<<endl;
    cout<<"health is"<<akak->gethealth()<<endl;
    /*hero kaka;
    cout<<"size of kaka"<<sizeof(kaka)<<endl;
    cout<<"health of kaka is"<< kaka.gethealth()<<endl;
    kaka.sethealth(70);


    kaka.level = 'A';

    cout<<"health is"<<kaka.gethealth()<<endl;
    cout<<"level is"<<kaka.level<<endl;*/



    return 0;
}