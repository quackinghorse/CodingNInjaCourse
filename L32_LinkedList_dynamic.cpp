// #include <iostream>
// using namespace std;

// class node
// {
// public:
//     int data;
//     node *next;

//     node(int data) {
//         this-> data = data;
//         next = NULL;
//     }
// };
// int main()
// {
//     //dynamic creation
//     node *n3 = new node(1);
//     node *head = n3;  // store the address of the head node 

//     node *n4 = new node(3);
//     head -> next = n4; // link established 
//     cout<<head->next<<endl;
//     cout<<n4<<endl;

//     return 0;
// }

#include<iostream>
using namespace std;

class node {
int data ;
node *next;


node(int data) {
    this->data = data;
   next = NULL;
}
};

int main()
{
    node *n1 = new node(1);

return 0;
}
