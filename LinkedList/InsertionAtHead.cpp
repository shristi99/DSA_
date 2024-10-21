#include<iostream>
using namespace std;


class Node{
    public:
    int data;
    Node * next;

    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};


void insertAtHead(Node *&head,int d){
    Node *temp=new Node(d);
    temp->next=head;
    head=temp;

}

void insertAtTail(Node *&tail,int d){
    Node *temp=new Node(d);
    tail->next=temp;
    tail=temp;
}

void insertAtPosition(Node *&tail, Node *&head,int pos,int d){

    Node *temp= head;
    int cnt=1;

  //insertatstart
  if(pos==1){
    insertAtHead(head,d);
    return;
  }

  //insertatposition
  while(cnt<pos-1){
    temp=temp->next;
    cnt++;
  }

 Node *NodeToInsert=new Node(d);
 NodeToInsert->next=temp->next;
 temp->next=NodeToInsert;

  //insertAtend
  if(temp->next==NULL){
    insertAtTail(tail,d);
    return;
  }

}

//deletion

void deleteNode(Node *&head,int pos){
   
   //deletion at start
   if(pos==1){
    Node *temp=head;
    head=head->next;
    temp->next=NULL;
    delete temp;
   }

   //deletion at middle and end
   else {
    Node *curr=head;
    Node *prev=NULL;

    int cnt=1;
    while(cnt<pos){
        prev=curr;
        curr=curr->next;
        cnt++;
    }

    prev->next=curr->next;
    curr->next=NULL;
    delete curr;
   }

}

void print(Node *&head){
    Node * temp= head;
    while(temp!=NULL){
        cout<<temp->data<<"-->";
        temp=temp->next;
    }
    cout<<"NULL";
}

int main(){

    Node * node1=new Node(10);
    // cout<<node1->data<<" ";
    // cout<<node1->next;

    Node *head=node1;
    insertAtHead(head,12);
    print(head);
   
    cout<<endl;
    
    Node *tail=node1;
    insertAtTail(tail,15);
    print(head);

      cout<<endl;
    

    insertAtPosition(tail,head,4,90);
    print(head);


    cout<<endl;

    deleteNode(head,2);
    print(head);

}