#include<bits/stdc++.h>
using namespace std;
struct Player{
    int x, y;
    ~Player(){
        cout << "Player destructed " << endl;
    }
};
int main(){
    // languages like python, java and ruby have auto 
    // memory management through garbage collecter
    // can we directly initialize a var in heap in cpp?
    // no we have to use pointers.
    // free or delete only work with pointers
    // smart pointers manage these memory spaces automatically
    // unique ptr
    // shared ptr
    // weak ptr
    unique_ptr<Player> ptr1 = make_unique<Player>();
}