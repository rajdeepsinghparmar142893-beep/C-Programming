#include<iostream>
using namespace std;
const int MAX=100;
void Input(int a[], int &Size){
    cout<<"Enter Size of the array"<<endl;
    cin>>Size;
    if(Size<0 || Size>MAX){
        cout<<"Invalid size. Enter a value between 0 and "<<MAX<<"."<<endl;
        Size=0;
        return;
    }
    cout<<"Enter "<<Size<<" elements"<<endl;
    for(int i=0;i<Size;i++){
        cin>>a[i];
    }

}
void Display(int a[], int Size){
    for(int i=0;i<Size;i++){
    cout<<a[i]<<"\t";
    }
    cout<<endl;
}

void Insert(int a[], int &Size){
    if(Size>=MAX){
        cout<<"Size of Array is FUll!!";
        return;
    }
    int pos, value;
    if(Size==0){
        cout<<"Array is Empty, Inserting at position 0"<<endl;
        pos=0;
    } else {
        cout<<"Enter position to Insert (0 to "<<Size<<"): ";
        cin>>pos;
        if(pos<0 || pos>Size){
            cout<<"Invalid position. Inserting at the end."<<endl;
            pos=Size;
        }
    }
    cout<<"Enter value to be Inserted: ";
    cin>>value;
    for(int i=Size-1;i>=pos;i--){
        a[i+1]=a[i];
    }
    a[pos]=value;
    Size++;
}
void Delete(int a[],int &Size){
    if(Size<=0){
        cout<<"Array is empty, nothing to delete."<<endl;
        return;
    }
    int Pos;
    cout<<"Enter an index element to be deleted (0 to "<<Size-1<<"): ";
    cin>>Pos;
    if(Pos<0 || Pos>=Size){
        cout<<"Invalid index."<<endl;
        return;
    }
    for(int j=Pos;j<Size-1;j++){
        a[j]=a[j+1];
    }
    Size--;

}

int main(){
   int Size;
   int a[MAX];
   int pos,value;

    Input(a,Size);
    Display(a,Size);
    Insert(a,Size);
    Display(a,Size);
    Delete(a,Size);
    Display(a,Size);

    return 0;
}
