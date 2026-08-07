#include<iostream>
using namespace std;
class Node{
public: 
    int Data;
    Node* next;
    Node(int value){
        Data=value;
        next=NULL;
    }
};
class Linkedlist{
 private:
    Node* head;
 public:
    Linkedlist(){
        head=NULL;
    }
    void insert_at_beggining(int value){
        Node* Newnode=new Node(value);
        Newnode->next=head;
        head=Newnode;
        cout<<"Inserted Node Successfully at the beginning \n";
    }
/*
void count(){
  Node* temp=head;
  int Value=0;
  while(temp!=NULL){
    Value++;
    temp=temp->next;
  }
  cout<<"Number of Nodes are: "<<Value<<endl;
}
void CountEven(){
 Node* temp=head;
 int CouEve=0;
 while(temp!=NULL){
     if(temp->Data%2==0){
         CouEve++;
     }
     temp=temp->next;
 }
 cout<<"Number of Even Nodes are: "<<CouEve<<endl;
}
void CountOdd(){
 Node* temp=head;
 int CouOdd=0;
 while(temp!=NULL){
     if(temp->Data%2!=0){
         CouOdd++;
     }
     temp=temp->next;
 }
 cout<<"Number of Odd Nodes are: "<<CouOdd<<endl;
}
void Search(int value){
 Node* temp=head;
    while(temp!=NULL){
        if(temp->Data==value){
            cout<<"Value Found in the List"<<endl;
            return;
        }
        temp=temp->next;
    }
    cout<<"Value Not Found in the List"<<endl;
}
void CountSearchkey(int key){
    Node* temp=head;
    int Count=0;
    while(temp!=NULL){
        if(temp->Data==key){
            Count++;
        }
        temp=temp->next;
    }
    cout<<"Number of Occurrences of "<<key<<" is: "<<Count<<endl;
}

void Addition(){
    Node* temp=head;
    int sum=0;
    while(temp!=NULL){
        sum+=temp->Data;
        temp=temp->next;
    }
    cout<<"Sum of All Data in the List is: "<<sum<<endl;
}
void Multipy(){
    Node* temp=head;
    int sum=1;
    while(temp!=NULL){
        sum*=temp->Data;
        temp=temp->next;
    }
    cout<<"Multiplication of All Data in the List is: "<<sum<<endl;
}
void Update_value(int Old_Val,int New_Val){
    Node* temp=head;
    
    while(temp!=NULL){
        if(temp->Data==Old_Val){
            temp->Data=New_Val;
        }
        temp=temp->next;
    }
    cout<<"pls enter Valid Old-Value!!"<<endl;
}
 void Update_Va(int Value,int pos){
     Node* temp=head;
     int COunter=0;
     while(COunter!=0 and temp!=NULL){
        temp=temp->next;
        COunter++;
     }
     if(temp==NULL)
        cout<<"Cannot update the Value at Mentioned Position!!\n";
     else
          temp->Data=Value;
     
    }  */
    void Insertinbet(int val,int pos){
        Node* newnode=new Node(val);

        if(pos<=1 || head==NULL){
            newnode->next=head;
            head=newnode;
            cout<<"Inserted Node Successfully at the beginning\n";
            return;
        }
        Node* temp=head;
        int counter=1;
        while(temp!=NULL && counter<pos-1){
            temp=temp->next;
            counter++;
        }
        if(temp==NULL){
            Node* last=head;
            while(last->next!=NULL){
                last=last->next;
            }
            last->next=newnode;
        }
        else{
            newnode->next=temp->next;
            temp->next=newnode;
        }

        cout<<"Inserted Node Successfully at position "<<pos<<"\n";
    }

   void deleteNode(){
        
    }
void Display(){
    Node* temp=head;
    if(head==NULL){
        cout<<"List is Empty"<<endl;
        return;
    }
    while(temp!=NULL){
        cout<<temp->Data<<"->";
        temp=temp->next;
    }
    cout<<endl;
}
};
int main(){
    int n,Value;
    cout<<"Enter a value to insert at the beginning of the linked list: ";
    cin>>n;
    Linkedlist list;
    for(int i=0;i<n;i++){
        cout<<"Enter a Value: ";
        cin>>Value;
        list.insert_at_beggining(Value);
        list.Display();
    }
    list.Insertinbet(100,5);
    list.Display();
    //list.insert_at_beggining(n);
    system("pause");
    return 0;
}
