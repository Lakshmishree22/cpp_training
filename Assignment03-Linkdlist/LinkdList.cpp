#include <iostream>
using namespace std;

class linklist
{
    private:

    struct node
    {
        int data;
        node *link;
    }*p;

    public:
    linklist();
    void append(int num);
    int GetAtIndex(int pos);
    void SetAtIndex(int pos,int newdata);
    void InsertAtIndex(int pos,int newdata);
    void linklist::RemoveAtIndex(int pos);
    void findTotalElements();
    int count();
    void display();
    ~linklist();
};

linklist::linklist()
{
    p=NULL;
}

//Add an item to the end of the list 
void linklist::append(int num)
{
    node *q,*t;

    if(p==NULL)
    {
        //create first node
        p=new node;
        p->data=num;
        p->link=NULL;
    }
    else 
    {
        q=p;
        while(q->link!=NULL)
        q=q->link;

        t=new node;
        t->data=num;
        t->link=NULL;
        q->link=t;

    }
}

//Get an item from a given index position 
int linklist::GetAtIndex(int pos)
{
    node *q,*t;int i=1;

    for(q=p;q->link!=NULL;q=q->link)
    {
        if(i==pos)
        {
            return q->data;
        }
        i++;
    }
}

//Set an item from a given index position 
void linklist::SetAtIndex(int pos,int newdata)
{
    node *q,*t;int i=1;

    for(q=p;q->link!=NULL;q=q->link)
    {
        if(i==pos)
        {
             q->data=newdata;
        }
        i++;
    }
}

//Insert an item at a given index position
void linklist::InsertAtIndex(int newdata,int pos)
{
    node *q,*t;
    int i;
    q=p;
//skip to desired portion
    for(i=0;i<pos;i++)
    {
        q=q->link;
        //if end of linklist is encountered
        if(q=NULL)
        {
            cout<<endl<<"there sre less than"<<pos<<endl:
            return;
        }

    }

    //insert new node
    t=new node;
    t->data=newdata;
    t->link=q->link;
    q->link=t;
}

//Find total number of items 
int linklist::findTotalElements()
{
    node *q,*t;int i=0;

    for(q=p;q->link!=NULL;q=q->link)
    {
        i++;
    }

    return i;
}

//Display all Items 
void linklist::display()
{
    node *q,*t;int i=0;

    for(q=p;q->link!=NULL;q=q->link)
    {
       cout<<"Data="<<q->data<<endl;
    }

    return;
}