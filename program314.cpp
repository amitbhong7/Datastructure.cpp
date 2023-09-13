#include<iostream>
using namespace std;

typedef struct node
{
    int data;
    struct node *next;
    struct node *prev;


}NODE,*PNODE;

class DoublyCL
{
    private:
    PNODE first;
    PNODE last;
    int icount;

    public:
    DoublyCL();
    ~DoublyCL();
    
    void insertfirst(int no);
    void insertlast(int no);
    void insertAtpos(int no,int ipos);

    void deletefirst();
    void deletelast();
    void deleteAtpos(int ipos);

    void display();
    int count();
};

DoublyCL::DoublyCL()
{

}
DoublyCL::~DoublyCL()
{

}
 void DoublyCL::insertfirst(int no)

{

}
 void DoublyCL:: insertlast(int no)
 {

 }
 void DoublyCL:: insertAtpos(int no,int ipos)
{

}
 void DoublyCL:: deletefirst()
 {

 }
 void DoublyCL:: deletelast()
 {

 }
 void DoublyCL:: deleteAtpos(int ipos)
 {

 }
 void DoublyCL:: display()
 {

 }
 int DoublyCL::count()
 {}

int main()
{


    return 0;

}