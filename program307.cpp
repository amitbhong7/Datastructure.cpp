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
  PNODE newn=NULL;
  newn=new NODE;
  newn->data=no;
  newn->next=NULL;

  if(first==NULL)//LL is empty
  {
     first=newn;

  }
  else//LL is contains atlist one node
  {
    newn->next=NULL;
    first=newn;

  }
   icount++;


}
void singlyLL::insertlast(int no)
{

  PNODE newn=NULL;
  newn=new NODE;
  newn->data=no;
  newn->next=NULL;

  if(first==NULL)//LL is empty
  {
     first=newn;

  }
  else//LL is contains atlist one node
  {
    PNODE temp=first;
    while (temp->next !=NULL)
    {
        temp=temp->next;

    }
    temp->next=newn;

  }
   icount++;


}
void singlyLL::insertAtpos(int no,int ipos)
{
   if((ipos<1)||(ipos>icount+1))
   {
    cout<<"invalid position"<<"\n";
     return;
   }

   if(ipos==1)
   {
    insertfirst(no);

   }

   else if(ipos==icount)
   {
    insertlast(no);

   }
   else
   {
    PNODE temp=first;
    for( int icnt=1;icnt<ipos; icnt++)
    {
        temp =temp->next;

    }
    PNODE newn=new NODE;
    newn->data=no;
    newn->next=NULL;
   

   newn->next= temp->next;
   temp->next=newn;

   icount++;

   }
}
void singlyLL::deletefirst()
{
    
  if(first==NULL)
  {
    return ;
  }
  else if (first->next=NULL)
  {
     delete first;
     first=NULL;

  }

   else 
{
    PNODE temp=first;
    first=first->next;
    delete  temp;

     
}
  icount--;
}
void singlyLL::deletelast()
{
 if(first==NULL)
  {
    return ;
  }
  else if (first->next=NULL)
  {
    delete first;
    first=NULL;
    
  }   
  else
  {
    PNODE temp=first;
    
    while (temp->next->next !=NULL)
    {
        temp=temp->next;

    }
    delete temp->next;
    temp->next=NULL;
    
    
  }
  icount--;

}
void singlyLL::deleteAtpos(int ipos)
{
    
   if((ipos<1)||(ipos>icount))
   {
    cout<<"invalid position"<<"\n";
     return;
   }

   if(ipos==1)
   {
    deletefirst();

   }

   else if(ipos==icount)
   {
    deletelast();

   }
   else
   {
    PNODE temp=first;
    PNODE tempx=NULL;
    
    for( int icnt=1;icnt<ipos; icnt++)
    {
        temp =temp->next;

    }
    PNODE newn=new NODE;
    newn->data=no;
    newn->next=NULL;
   

   newn->next= temp->next;
   temp->next=newn;

   icount++;
   }

}
void singlyLL::display()
{  
    PNODE temp=first;

   while (temp!=NULL)
   {
    cout<<"| "<<temp->data<<" |->";
    temp=temp->next;

   }
   cout<<"NULL"<<"\n";

   
}
int  singlyLL::count()
{
 return icount;

}

singlyLL::singlyLL()
{
    cout<<"inside counstructor\n";

    first=NULL;
    icount=0;

}
/*singlyLL::~singlyLL()
{
  cout<<"inside destructor\n";
}
*/


int main()
{
    int iret=0;

    singlyLL obj1;
    singlyLL obj2;


    obj1.insertfirst(51);
    obj1.insertfirst(21);
    obj1.insertfirst(11);
    obj1.insertlast(101);
    obj1.insertlast(111);


iret=obj1.count();
cout<<"number of count:"<<iret<<"\n";

   obj1.deletefirst();
   obj1.deletelast();

  
   iret=obj1.count();
   cout<<"count is:"<<iret<<"\n";

    obj1.insertAtpos(105,4);

   obj1.display();

    
    return 0;

}