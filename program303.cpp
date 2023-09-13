#include<iostream>
using namespace std;

typedef struct node

{
    int data;
    struct node *next;
}NODE,*PNODE,**PPNODE;


class singlyLL
{
 
 private:
  PNODE first;//characteristics
  int icount;//characteristics

  public:
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
//implimentations of all behaviours
void singlyLL::insertfirst(int no)
{


}
void singlyLL::insertlast(int no)
{

}
void singlyLL::insertAtpos(int no,int ipos)
{

}
void singlyLL::deletefirst()
{

}
void singlyLL::deletelast()
{
    
}
void singlyLL::deleteAtpos()
{
    
}
void singlyLL::display()
{

}
int  singlyLL::count()
{

}

singlyLL::singlyLL()
{
    cout<<"inside counstructor\n";

    first=NULL;
    icount=0;

}
int main()
{
    singlyLL obj1();
    singlyLL obj2();
    


    return 0;

}