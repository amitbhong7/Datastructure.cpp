#include<iostream>
using namespace std;

typedef struct node

{
    int data;
    struct node *next;
}NODE,*PNODE,**PPNODE;


class singlyLL
{
 
 public:
  PNODE first;//characteristics

    singlyLL();
    
    void insertfirst(int no);
    void insertlast(int no);
    void insertAtpos(int no, int ipos);
    
    void deletefirst();
    void deletelast();
    void deleteAtpos();

    void display();
    int count();
    
};
int main()
{

    return 0;

}